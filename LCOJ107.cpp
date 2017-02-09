#include "header.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (root == nullptr) return result;
        level = 0;
        traversTreeAndAdd(root);

        vector< vector<int> > res;
        for (int i = result.size() -1 ; i >=0  ; --i){
            res.push_back(result[i]);
        }
        // vector< vector<int> > res = reverse(result.begin() , result.end());

        return res;
    }

private:
    vector< vector<int> > result;
    size_t level ;
    void traversTreeAndAdd(TreeNode* root){
        if (root == nullptr) return;
        level ++;
        if (result.size() < level) {
            vector<int> temp;
            temp.push_back(root->val);
            result.push_back(temp);
        }else{
            result[level-1].push_back(root->val);
        }
        traversTreeAndAdd(root->left);
        traversTreeAndAdd(root->right);
        level --;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(3);
    TreeNode node2(9);
    TreeNode node3(20);
    TreeNode node4(15);
    TreeNode node5(7);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node4;
    node3.right = &node5;

    vector< vector<int> > result =  s.levelOrderBottom( &node1);
    for (size_t i = 0 ; i < result.size() ; i++){
        for (size_t j = 0 ; j < result[i].size() ; ++j){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // cout << (bool)("abc" == "abc") << endl;

}
