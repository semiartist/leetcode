#include "header.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector< vector<int> > result;
        if (nums.size() < 4) return result;
        if (nums.size() == 4){
            int sum = 0;
            for (auto i : nums) sum += i;
            if (sum == target) (result.push_back(nums));
            return result;
        }
        sort(nums.begin() , nums.end());
        int newTar = 0;
        for (size_t i = 0 ; i < nums.size()-3 ; ++i){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            bool init = false;
            for (size_t j = i+1 ; j < nums.size() - 2 ; ++j){
                if (nums[j-1] == nums[j] && init) continue;
                init = true;
                newTar = target - nums[i] - nums[j];
                int start = j + 1;
                int end = nums.size() - 1;
                while (start < end){
                    // cout << nums[i] << " "<< nums[j]<< " " << nums[start]<< " " << nums[end] << endl;
                    // cout << "sum -> " << nums[i] + nums[j] + nums[start] + nums[end] << endl;
                    if (nums[start] + nums[end] -newTar==0){
                        result.push_back({nums[i] , nums[j], nums[start], nums[end]});
                        start++;
                        end--;
                        while (nums[start] == nums[start-1]) start++;
                        while (nums[end] == nums[end+1]) end--;
                    }
                    else if (nums[start] + nums[end] -newTar < 0) start++;
                    else if(nums[start] + nums[end] -newTar > 0) end--;
                }
            }
        }
        return result;
    }
};

int main (){
    Solution s;
    vector<int> nums = {1, 0,-1,0,-2,2};
    cout << s.fourSum(nums, 0).size()<< endl;


}
