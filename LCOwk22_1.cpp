#include "header.h"

using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        if (nums.size() <2) return 0;
        unordered_map<int, int> result;
        int i = 0 , j = 1;
        while (j != nums.size()){
            if (j == i) j++;
            else {
                if (nums[j] - nums[i] < k) j++;
                else if (nums[j] - nums[i] > k) i++;
                else if(nums[j] - nums[i] == k) {
                    result[nums[i]] = nums[j];
                    i++;
                    j++;
                }
            }
        }
        return result.size();
    }
};

int main(){
    Solution s;
    vector<int> nums = {0,1,2};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;

    cout << (s.letterCombinations("23")).size();

}
