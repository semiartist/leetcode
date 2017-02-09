#include "header.h"

using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        int result = num;
        vector<int> list = {2,3,5};
        for (int  i: list){
            while (result >= i && result % i == 0 ){
                result /=  i;
            }
            // cout << "result -> " << result << "i -> " << i << endl;
            if (result == 1) return true;
        }
        return false;
    }
};


int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(1);
    cout << s.isUgly(14) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
