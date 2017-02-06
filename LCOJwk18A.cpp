#include "header.h"

using namespace std;

class Solution {
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> result;
        pair<int, int> ending = subTreeValue(root);
        if (ending.first == 1) solver[ending.second]++;

        map<int, int>::iterator it = solver.begin();
        int big = 0;
        while (it != solver.end()){
            if(it->second > big){
                result.clear();
                big = it-> second;
                result.push_back(it->first);
            }else if(it->second == big){
                result.push_back(it->first);
            }
            it++;
        }

        return result;
    }
private:
    map<int, int> solver;
    pair<int, int> subTreeValue(TreeNode *root){
        pair<int, int> result;
        result.first = 1 ;
        result.second = 0;
        if (root == nullptr){
            result.first = 0;
            return result;
        };
        pair<int, int> left = subTreeValue(root -> left);
        pair<int, int> right = subTreeValue(root-> right);
        int leftVal = 0, rightVal = 0;
        if(left.first ==1 ) leftVal = left.second;
        if (right.first ==1) rightVal = right.second;
        solver[leftVal]++;
        solver[rightVal]++;
        result.second = leftVal + rightVal + root->val;

        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {0,2,1};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9,12,15,1,2,4,9};
    ListNode *node1 = new ListNode(1);
    TreeNode tnode1(5);
    TreeNode node2(2);
    TreeNode node3(-3);
    // TreeNode node4(4);
    // TreeNode node5(2);
    tnode1.left = &node2;
    tnode1.right = &node3;
    // node2.left = &node4;
    // node2.right = nullptr;
    // node3.left  = &node5;
    vector<int> result = s.findFrequentTreeSum(&tnode1);

    for(size_t i = 0 ; i < result.size() ; ++i){
        cout << result[i] << endl;
    }

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
