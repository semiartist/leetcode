#include "header.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // unordered_set<vector<int> > result;
        vector< vector<int> > res;
        if (nums.size() <3) return res;
        sort(nums.begin() , nums.end());
        if (nums[0] > 0) return res;
        for (size_t i = 0 ; i < nums.size() ; ++i){
            // cout << nums[i] << "  " <<i << endl;
            unsigned int front = i + 1;
            unsigned int end = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i -1] && front < end) continue;

            while (front < end){
                int result = nums[i] + nums[front] + nums[end];
                // cout << "result ->" << result << endl;
                if (result < 0) ++front;
                if  (result > 0) --end;
                if (result == 0) {
                    int temp1 = nums[front];
                    int temp2 = nums[end];
                    res.push_back({nums[i] , nums[front] , nums[end]});
                    while (nums[front] == temp1 && front < end) ++front;
                    while (nums[end] == temp2 && front < end) --end;
                }
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int> nums = {0,0,0};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;

    s.threeSum(nums);

}
