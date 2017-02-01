#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using std::vector;
using std::string;
using std::cout;
using std::endl;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return root;
        if (root->left != nullptr) invertTree(root->left);
        if (root->right != nullptr) invertTree(root->right);
        if (root->right !=nullptr && root->left != nullptr) {
            std::swap(root->left, root->right);
        }else if(root->right != nullptr){
            root->left = root->right;
            root->right = nullptr;
        }else if(root->left != nullptr){
            root->right = root->left;
            root->left = nullptr;
        }
        return root;
    }
};

void printTree(TreeNode *root){
    cout << root->val << endl;
}

int main(){
    Solution s;
    TreeNode node1(4);
    TreeNode node2(2);
    TreeNode node3(7);
    TreeNode node4(1);
    TreeNode node5(3);
    TreeNode node6(6);
    TreeNode node7(9);

    node1.left = &node2;
    node1.right = &node3;

    node2.left = &node4;
    node2.right = &node5;

    node3.left = &node6;
    node3.right = &node7;

    s.invertTree(&node1);
    printTree(&node1);
    printTree(node1.left);
    printTree(node1.right);
    printTree(node1.left->left);
    printTree(node1.left->right);




}
