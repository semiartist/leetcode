#include "header.h"

using namespace std;
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if (nums.size() == 1) return (nums[0] == 1? 0:1);
        bool last = true;
        int pos;
        for (int a : nums) {
            if(abs(a) == nums.size())  last = false;
            else nums[abs(a)] *= (-1);
        }

        if (last) return (int)nums.size();

        for (int i = 0 ; i < nums.size() ; i++){
            if(nums[i] >0) return i;
            if (nums[i] == 0) pos = i;
        }

        return pos;
    }
};
*/

class Solution{
public:
    int missingNumber(vector<int> & nums){
        int result = nums.size();
        for (int i = 0 ; i < nums.size() ; ++i){
            result -= nums[i];
            result += i;
        }

        return result;
    }
};


int main(){
    Solution s;
    vector<int> nums1 = {0,2,1};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9,12,15,1,2,4,9};
    ListNode *node1 = new ListNode(1);

    cout<< s.missingNumber(nums1)<< endl;;
    int a = 5 ;
    int b = 4 ;
    int c = a^b;

    cout << c;
    //
    // vector<string> result = s.readBinaryWatch(4);

    // vector<int> result = s.missingNumber(nums1, nums2);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
