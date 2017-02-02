#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <iterator>
#include <unordered_set>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::unordered_set;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool hold = false;
        int result = 0;
        for (int i = 1 ; i < prices.size() ; ++i){
            if ((prices[i] - prices[i-1]) > 0) result += (prices[i] - prices[i-1]) ;
        }
        return result;

    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 5, 8, 6, 5,4};
    // vector<int> nums2 = {5,2};
    // vector<int> result = s.intersection(nums1, nums2);
    // for (size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }
    // cout << s.maxProfit(nums1);
    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
