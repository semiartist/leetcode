#include "header.h"

using namespace std;

class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if (!root) return 0;
        return keepAdd(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
private:
    int keepAdd(TreeNode * root, int current, int sum){
        if (!root) return 0;
        current += root -> val;

        return (current == sum) + keepAdd(root->left,current, sum) + keepAdd(root->right,current, sum);
    }
};


int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(1);
    TreeNode node2(2);
    TreeNode node3(3);
    node1.left = &node2;
    node2.left = &node3;
    cout << s.pathSum(&node1, 3) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
