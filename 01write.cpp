#include "header.h"

using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        vector<long long int> num2(nums.size());
        // vector<long long int> num;
        int result = 0;
        if (nums.empty()) return 0;
        long long int smallest = nums[0];
        for (size_t i = 0 ; i < nums.size() ; i++){
            num2[i] = ((long long int)nums[i] * 2);
            if (num2[i] < smallest) smallest = num2[i];
        }
        // cout << "smallest ->" << smallest <<endl;
        for (size_t i = 0 ; i < nums.size() ; ++i){
            if (nums[i] > smallest){
                for (size_t j = i+1 ; j < num2.size() ; ++j){
                    if (nums[i] > num2[j]) result ++;
                    //..
                    //
                }
            }
        }
        return result;

    }
};


int main(){
    Solution s;
    vector<int> nums = {2147483647,2147483647,-2147483647,-2147483647,-2147483647,2147483647};
    vector<int> newNums(25,1);
    TreeNode node1(3);
    TreeNode node2(1);
    TreeNode node3(5);
    TreeNode node4(0);
    TreeNode node5(2);
    TreeNode node6(4);
    TreeNode node7(6);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node6;
    node3.right = &node7;
    node2.left = &node4;
    node2.right = &node5;
    cout << s.reversePairs(nums)<<endl;
    // cout << 2147483647 * 2 << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
