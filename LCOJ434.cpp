#include "header.h"

using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int result = 0;
        bool word = false, space = true ;
        for (char c : s) {
            if (c == ' ' && word) {
                word = false;
                space = true;
            }
            if(c != ' ' && space){
                space = false;
                word =true;
                result++;
            }
        }
        return result;
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
