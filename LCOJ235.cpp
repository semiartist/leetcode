#include "header.h"

using namespace std;

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) return root;
        if (p == nullptr || q == nullptr ) return (p == nullptr? q : p);

        if ( (p->val >= root->val && q->val <= root->val) || (p->val <= root->val && q->val >= root->val) ){
            return root;
        }

        if (p->val > root->val && q->val > root->val){
            return lowestCommonAncestor(root->right , p, q);
        }else {
            return lowestCommonAncestor(root->left , p , q);
        }
        return root;
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
