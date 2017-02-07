#include "header.h"

using namespace std;

/*
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        for (; index < nums.size() ; index++){
            if(nums[index] >= target) return index;
        }
        return index;
    }
};
*/ // another slotuion
class Solution{
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size());
    }
private:
    int binarySearch(vector<int>& nums, int target, int start , int end ){
        cout << "start -> " << start << " end -> " << end << endl;
        if (start >= end) return start;
        int middle = (end - start)/2 + start;
        if (nums[middle] == target) return middle;
        else if(nums[middle] < target) {
            start = middle + 1;
            return binarySearch(nums, target, start,end);
        } else {
            end = middle ;
            return binarySearch(nums, target, start,end);
        }
    }
};

int main(){
    Solution s;
    vector< vector<int> > nums1 = {};
    vector<int> nums = {1,3};
    int number = 2;

    // TreeNode * node1 = s.sortedArrayToBST(nums2);

    cout << s.searchInsert(nums, number)<<endl;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
