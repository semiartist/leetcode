#include "header.h"

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result;
        for(size_t i = 0 ; i < (nums.size()); ++i){
            bool find = false;
            for(size_t j = i ; j < (nums.size() *2 -1) ; ++j){
                size_t t;
                if (j >= nums.size()) t = j- nums.size();
                else t = j;

                if (nums[t] > nums[i]) {
                    result.push_back(nums[t]);
                    find = true;
                    break;
                }
            }
            if(!find) result.push_back(-1);
        }

        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {1,1,2};
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
    cout << s.findMaximizedCapital(1,2,nums1, nums2);


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
