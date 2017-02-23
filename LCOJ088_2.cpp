#include "header.h"

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int target = m + n - 1;
        nums1.resize(m+n);
        --m; --n;
        while (m >= 0 && n >= 0){
            if(nums1[m] > nums2[n] ) nums1[target--] = nums1[m--];
            else nums1[target--] = nums2[n--];
        }
        while (m >= 0){
            nums1[target--] = nums1[m--];
        }
        while (n >= 0) nums1[target--] = nums2[n--];
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,5,7,8,56};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;
    s.merge(nums, 6, nums2, 3);
}
