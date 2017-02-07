#include "header.h"

using namespace std;

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) return nullptr;
        return buildTree(0, nums.size() , nums);
        // then construct the binary tree base on sorting result;

    }

private:
    TreeNode * buildTree(int start, int end, vector<int> & nums){
        if (start == end) return nullptr;
        int midPoint = (end - start) / 2 + start;
        TreeNode * root = new TreeNode(nums[midPoint]);
        root -> left = buildTree(start, midPoint , nums);
        root -> right = buildTree(midPoint+1 , end, nums);
        return root;
    }
};


int main(){
    Solution s;
    vector< vector<int> > nums1 = {};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9};

    TreeNode * node1 = s.sortedArrayToBST(nums2);

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
