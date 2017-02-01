#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    int findComplement(int num) {
        vector<int> binary;
        int result = num;
        int residual = result%2;
        binary.push_back(residual);
        result = num/2;

        while(result != 0){
            residual = result%2;
            result = result / 2;
            binary.push_back(residual);
        }

        int comp = 0;
        int i = binary.size() -1;

        while(!binary.empty()){
            int digit;
            if ( *(binary.end() - 1)  == 0) digit = 1;
            else digit = 0;
            comp += digit*pow(2,i--);
            binary.pop_back();
        }

        return comp;
    }
};

int main(){
    // Solution s;
    unsigned mask = ~0;

    cout << mask << endl;
    mask <<= 1;
    cout << mask << endl;

    cout << ~0;

    // cout << s.findComplement(5);
}
