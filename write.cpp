#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <iterator>

using std::vector;
using std::string;
using std::cout;
using std::endl;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int result = 0;
        for(size_t i = 1 ; i < nums.size() ; ++i){
            result += (nums[i] - nums[i-1]) * (nums.size() - i);
        }
        return result;
    }
};
int main(){
    Solution s;
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 1};
    cout << s.findContentChildren(vec1, vec2);
    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
