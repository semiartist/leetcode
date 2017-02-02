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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> nums(nums1.begin() , nums1.end());
        for (int number:nums2){
            if (nums.find(number) != nums.end()){
                result.push_back(number);
                nums.erase(number);
            }
        }

        return result;
    }
};


int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 5, 8, 6, 5,4};
    vector<int> nums2 = {5,2};
    vector<int> result = s.intersection(nums1, nums2);
    for (size_t i = 0 ; i < result.size() ; ++i){
        cout << result[i] << endl;
    }
    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
