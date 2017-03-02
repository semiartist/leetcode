#include "header.h"

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> solver(nums.begin() , nums.end());
        multiset<int>::iterator it = solver.end();
        while (k != 0) {
            it--;
            --k;
        }
        return *it;
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
