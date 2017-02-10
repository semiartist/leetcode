#include "header.h"

using namespace std;

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        return (abs(howDeep(root -> left) - howDeep(root -> right)) <= 1) && isBalanced(root -> left) && isBalanced(root -> right);
    }
private:
    int howDeep(TreeNode * root){
        if (root == nullptr) return 0;
        return 1+ max(howDeep(root -> left), howDeep(root ->  right));
    }
    int max(int a, int b){
        return (a>b ? a : b);
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

    cout << s.isBalanced( &node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
