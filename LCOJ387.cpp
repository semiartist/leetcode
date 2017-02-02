#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <iterator>
#include <unordered_set>
#include <set>


using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::unordered_set;
using std::set;
using std::multiset;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


/*
class Solution {
public:
    int firstUniqChar(string s) {
        std::multiset<char> ss(s.begin() , s.end());
        int it = 0;
        for(char cc : s) {
            if (ss.count(cc) == 1) return it;
            it++;
        }

        return -1;
    }
};
*/
// method 2
class Solution {
public:
    int firstUniqChar(string s) {
        if(s.empty()) return -1;
        vector<int> number(26,0);
        vector<char> potential;
        for (char cc : s) number[cc - 'a'] += 1;
        for (int i = 0 ; i < 26 ; ++i ) if (number[i] == 1) potential.push_back('a' + i);
        if (potential.size() == 0) return -1;
        for (int i = 0 ; i < s.size() ; i ++){
            for (char bb: potential){
                if(bb == s[i]) return i;
            }
        }
        return -1;
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
    cout << s.firstUniqChar("cc");
    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
