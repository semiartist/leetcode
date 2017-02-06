#include "header.h"

using namespace std;


bool func (int i,int j) { return (i>j); }

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> dnums(nums);
        sort(dnums.begin() , dnums.end(), func);
        vector<string> result;
        for(size_t i = 0 ; i < nums.size() ; ++i){
            size_t j = 0;
            while(dnums[j] != nums[i]) ++j;
            if (j == 0) result.push_back("Gold Medal");
            else if(j == 1) result.push_back("Silver Medal");
            else if(j == 2) result.push_back("Bronze Medal");
            else result.push_back(to_string((int)(j+1)));
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
    s.findRelativeRanks(nums1);


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
