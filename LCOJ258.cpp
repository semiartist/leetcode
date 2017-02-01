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
    int addDigits(int num) {
        int result = 0;
        while(1){
            while (num / 10 != 0){
                result += num % 10;
                num /= 10;
            }
            result += num%10;

            if (result / 10 == 0) return result;
            num = result;
            cout << "result -> " << result << endl;
            result = 0;
        }

    }

};


int main(){
    vector<int>  test = {1,2,3,5,8,7,4,6,5,4,7,8,2,1,3};

    Solution s;
    cout << s.addDigits(13589)<<endl;
}
