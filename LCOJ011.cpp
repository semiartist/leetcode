#include "header.h"

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0 , j = height.size() - 1;
        int h = min(height[i] , height[j]);
        int water = h * (j -i);
        if (h == height[i]) ++i;
        else --j;
        while (i < j){
            h = min(height[i], height[j]);
            water = max(water, h * (j -i));
            if (h == height[i]) ++i;
            else --j;
        }
        return water;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,3,5,7,8,56};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;

    int ss = 9&8;

    cout << ss;

}
