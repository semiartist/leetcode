#include "header.h"

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> solver(n);
        solver[0] = 0;
        solver[1] = 1;
        if (n > 1)  for (int i = 2 ; i < n ; i++) sover[i] = solver[i-1] + solver[i-2];

        return solver[n];
    }
};
int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    cout << s.maxSubArray(nums);

}
