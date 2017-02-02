#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <iterator>
#include <unordered_set>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::unordered_set;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        // if the root if nullptr, return
        if(root == nullptr) return 0;

        if (root->left == nullptr && root->right == nullptr) return 0;
        // tell the left and right are not nullptr
        int result = 0;
        if (root -> left != nullptr){
            if (root->left->left == nullptr && root->left->right == nullptr){
                result = root->left->val;
            }else{
                result += sumOfLeftLeaves(root->left);
            }
        }

        if (root->right != nullptr){
            if (root->right->left != nullptr || root->right->right != nullptr) result +=sumOfLeftLeaves(root->right);

        }
        // tell the left branch is leave or not

        // yes return the left value

        // no go to next level;
        return result;
    }
};


int main(){
    Solution s;
    // vector<int> nums1 = {1, 2, 5, 8, 6, 5,4};
    // vector<int> nums2 = {5,2};
    // vector<int> result = s.intersection(nums1, nums2);
    // for (size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }
    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
