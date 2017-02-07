#include "header.h"

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if ( n == 0 ) return false;
        if (n == 1) return true;
        if(n < 0 || n%2 == 1) return false;
        else return isPowerOfTwo(n/2);
    }
};

int main(){
    Solution s;
    vector< vector<int> > nums1 = {};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9};

    // TreeNode * node1 = s.sortedArrayToBST(nums2);

    cout << s.isPowerOfTwo(18)<<endl;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
