#include "header.h"

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool step = false;
        for (int i = digits.size() - 1 ; i >=0 ; --i){
            if (digits[i] +1 >9) {
                digits[i] = (digits[i]+1)%10;
                step = true;
            }else {
                digits[i] += 1;
                step = false;
            }

            if (!step) return digits;
        }
        if(step){
            digits.push_back(0);
            for (int i = digits.size() - 1 ; i >0 ; --i){
                digits[i] = digits[i-1];
            }
        }
        digits[0] = 1;
        return digits;
    }
};


int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(1);
    TreeNode node2(2);
    TreeNode node3(2);
    TreeNode node4(3);
    TreeNode node5(3);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node4;
    node2.right = &node5;

    cout <<  s.countSegments("   ");

    // cout << (bool)("abc" == "abc") << endl;

}
