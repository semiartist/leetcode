#include "header.h"

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        if (n == 1) return true;
        int m = n%3;
        int k = n/3;
        if (k ==1 && m == 0) return true;
        // cout << "n -> "<< n << "m -> " << m << "k ->" << k << endl;
        if (m == 2 || m == 1 || k == 1 || k == 2) return false;
        else if (k > 3) return isPowerOfThree(k);
        else return true;
    }
};


int main(){
    Solution s;
    vector< vector<int> > nums1 = {};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9};

    // TreeNode * node1 = s.sortedArrayToBST(nums2);

    cout << s.isPowerOfThree(6)<<endl;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
