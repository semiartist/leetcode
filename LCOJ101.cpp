#include "header.h"

using namespace std;

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return traversCompare(root -> left , root -> right);
    }

private:
    bool traversCompare(TreeNode * nleft, TreeNode * nright){
        // cout << " --> CALLED <-- " << endl;
        if(nleft == nullptr && nright == nullptr) return true;
        if (nleft == nullptr || nright == nullptr) return false;
        // cout << " --> HERE <-- " << endl;
        // cout << "left -> " << nleft->val << " | right -> " << nright->val << endl;
        return (nleft->val == nright -> val) && traversCompare(nleft ->left, nright->right) && traversCompare(nleft->right , nright -> left);
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

    cout <<  s.isSymmetric( &node1);

    // cout << (bool)("abc" == "abc") << endl;

}
