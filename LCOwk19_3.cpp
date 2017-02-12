#include "header.h"

using namespace std;

class Solution {
public:
    vector<int> findValueMostElement(TreeNode* root) {
        // if (root == nullptr) return 0;
        // if (root -> left == nullptr) {
        //     if (root -> right == nullptr) return root->val;
        //     else return root->right->val;
        // }
        degree = 0;
        goDeep(root);
        return value;

    }

private:
    int degree;
    vector<int> value;
    void goDeep(TreeNode * root){
        if (root == nullptr) return;
        degree++;
        if (value.size() < degree){
            value.push_back(root -> val);
        }else {
            if (value[degree-1] < root -> val) value[degree - 1] = root->val;
        }
        goDeep(root->left);
        goDeep(root->right);
        degree --;
    }
};


int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(3);
    TreeNode node2(1);
    TreeNode node3(5);
    TreeNode node4(0);
    TreeNode node5(2);
    TreeNode node6(4);
    TreeNode node7(6);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node6;
    node3.right = &node7;
    node2.left = &node4;
    node2.right = &node5;
    s.findValueMostElement(&node1);

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
