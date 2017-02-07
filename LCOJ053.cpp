#include "header.h"

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // special case, return enpty
        int result=0;
        if (nums.empty()) return result;
        // declar variables;
        int globalSum = 0;
        int localSum = 0;
        size_t localStart = 0;
        size_t localEnd = 0;
        size_t globalStart = 0;
        size_t globalEnd = 0;

        // for loop to loop all;
        for (size_t i = 0 ; i < nums.size() ; ++i){
            // initialize
            if (i == 0){
                localStart = i;
                localEnd = i+1;
                globalStart = localStart;
                globalEnd = localEnd;
                localSum = nums[i];
                globalSum = localSum;
            }else { // rest case
                if (nums[i] >= 0){
                    if (localSum < 0){
                        localSum = 0;
                        localStart = i;
                    }
                }
                if (nums[i] < 0){
                    if (nums[i] > localSum){
                        localSum = 0;
                        localStart = i;
                    }
                }
                localSum += nums[i];
                localEnd = i+1;

                // tell if change the global pointers;
                if (localSum > globalSum){
                    globalStart = localStart;
                    globalEnd = localEnd;
                    globalSum = localSum;
                }else if(localSum == globalSum){
                    if (localEnd - localStart > globalEnd - globalStart){
                        globalStart = localStart;
                        globalEnd = localEnd;
                    }
                }
            }
            // cout << localStart << " " << localEnd << " " << globalStart << " " << globalEnd<< endl;

        }
        while(globalStart != globalEnd){
            result += nums[globalStart++];
        }
        return globalSum;
        // use local start and local end to regiseter start and end,
        // use global start and global end to register

        // first compare this add pre vs pre add prepre
        // then compare if the new sum is greater than global sum

    }
};

int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    cout << s.maxSubArray(nums);

}
