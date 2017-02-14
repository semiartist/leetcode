#include "header.h"

using namespace std;

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) return  result;
        isBottom(root);

        return result;

    }
private:
    // variables
    vector<string> result;
    vector<int> solver;
    void isBottom(TreeNode * root){
        // when it is the root nood;
        if (root == nullptr) return;
        solver.push_back(root -> val);
        if (root->left == nullptr && root->right == nullptr) {
            string current = "";
            for (size_t i = 0 ; i < solver.size() ; ++i){
                current += to_string(solver[i]);
                if (i != solver.size()-1) current += "->";
            }

            result.push_back(current);
            return;
        }
        // when it's not root

        if (root -> left != nullptr ) {
            isBottom(root -> left);
            solver.pop_back();
        }
        if (root -> right != nullptr ) {
            isBottom(root -> right);
            solver.pop_back();
        }
    }
};


int main(){
    Solution s;
    vector<int> nums = {2147483647,2147483647,-2147483647,-2147483647,-2147483647,2147483647};
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
    cout << s.reversePairs(nums)<<endl;
    // cout << 2147483647 * 2 << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
