#include "header.h"

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int localMin = prices[0];
        int globalMin = prices[0];
        int localDiff = 0;
        int globalDiff = 0;
        for (int a:prices){
            if (a < localMin) {
                localMin = a;
                localDiff = 0;
            }
            if (a - localMin > localDiff) {
                localDiff = a - localMin;
                if (localDiff > globalDiff) globalDiff = localDiff;
            }
        }
        return globalDiff;
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
