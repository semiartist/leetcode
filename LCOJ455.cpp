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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(g.begin() , g.end());
        std::sort(s.begin() , s.end());
        int j = 0 , i = 0;
        int result = 0;
        while(j < s.size() && i< g.size()){
            if (g[i] <= s[j]){
                result++;
                i++;
                j++;
            }else{
                j++;
            }
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
