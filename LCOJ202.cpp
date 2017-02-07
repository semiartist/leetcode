#include "header.h"

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int loop = 0;
        while (n != 1){
            vector<int> nums;
            while(n !=0){
                nums.push_back(n%10);
                n/=10;
            }
            n = 0;
            // construct new int;
            for (int a: nums) n += a*a;

            loop++;
            if ( loop > 100) return false;
        }
        return true;
    }
};
N02053206

int main(){
    Solution s;
    vector< vector<int> > nums1 = {};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9};

    // TreeNode * node1 = s.sortedArrayToBST(nums2);

    cout << s.isHappy(6)<<endl;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
