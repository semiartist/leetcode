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
    int getSum(int a, int b) {
        int sum = a;

        while (b != 0){
            sum = a ^ b;
            b = (a & b) << 1;
            a = sum;
        }
        return sum;
    }
};


int main(){
    vector<int>  test = {1,2,3,5,8,7,4,6,5,4,7,8,2,1,3};

    Solution s;
    cout << s.getSum(3, 2)<<endl;
}
