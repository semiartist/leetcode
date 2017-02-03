#include "header.h"

using namespace std;

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        traversTree(root);
        map<int , int>::iterator it = solver.begin();
        vector<int> result;
        int largest = 0;
        while (it != solver.end()){
            if (it->second > largest) {
                result.clear();
                largest = it->second;
                result.push_back(it->first);
            }else if (it->second == largest) result.push_back(it->first);

            it ++;
        }
        return result;
    }
private:
    void traversTree(TreeNode * root){
        if(root == nullptr) return;
        traversTree(root->left);
        traversTree(root->right);
        solver[root->val] ++;
        // cout << "this node value ->" << root->val << endl;
        return;
    }
    map<int, int> solver;
};

int main(){
    Solution s;
    vector<int> nums1 = {0,2,1};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9,12,15,1,2,4,9};
    ListNode *node1 = new ListNode(1);
    TreeNode tnode1(1);
    TreeNode node2(2);
    TreeNode node3(3);
    TreeNode node4(4);
    TreeNode node5(2);
    tnode1.left = &node2;
    tnode1.right = &node3;
    node2.left = &node4;
    node2.right = nullptr;
    node3.left  = &node5;
    s.findMode(&tnode1);

    // cout<< s.missingNumber(nums1)<< endl;;
    // cout << s.addStrings("9" , "99");
    //
    // vector<string> result = s.readBinaryWatch(4);

    // vector<int> result = s.missingNumber(nums1, nums2);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
