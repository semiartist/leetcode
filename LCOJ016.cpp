#include "header.h"

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums , int target) {
        // unordered_set<vector<int> > result;
        // vector< vector<int> > res;
        if (nums.size() <3) return 0;
        sort(nums.begin() , nums.end());
        int res = nums[0] + nums[1] + nums[2];
        int diff = abs (target - res) ;
        for (size_t i = 0 ; i < nums.size() ; ++i){
            // cout << nums[i] << "  " <<i << endl;
            unsigned int front = i + 1;
            unsigned int end = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i -1] && front < end) continue;

            while (front < end){
                int result = nums[i] + nums[front] + nums[end];
                // cout << "result ->" << result << endl;
                // cout << res << " "<< result << endl;
                if (abs(result - target) <= diff){
                    diff = abs(result - target);
                    res = result;
                }
                if (result < target) ++front;
                if (result > target) --end;
                if (result == target) {
                    return result;
                    /*
                    int temp1 = nums[front];
                    int temp2 = nums[end];
                    res.push_back({nums[i] , nums[front] , nums[end]});
                    while (nums[front] == temp1 && front < end) ++front;
                    while (nums[end] == temp2 && front < end) --end;
                    */
                }

            }
        }
        return res;
    }
};


int main(){
    Solution s;
    vector<int> nums = {0,1,2};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;

    cout << s.threeSumClosest(nums, 3);

}
