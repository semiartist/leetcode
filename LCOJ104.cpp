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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int result1, result2, result;
        if(root == nullptr) result1 =  0;
        else result1 = maxDepth(root->left);
        if(root == nullptr) result2 = 0;
        else result2 = maxDepth(root->right);

        result = result1>result2 ? result1: result2;
        return result +1;
    }

};

int main(){
    Solution s;
    cout << s.constructRectangle(20)[0] << "  " << s.constructRectangle(20)[1];
}
