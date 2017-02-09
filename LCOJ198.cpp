#include "header.h"

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0 , b = 0;
        for (int i = 0 ; i < nums.size() ; i++){
            if (i%2 == 0) a = max(a + nums[i] , b);
            else b = max(b+nums[i],a);
        }
        return max(a,b);
    }

private:
    int max(int a, int b){return (a>b ? a : b);}
};
int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(3);
    TreeNode node2(9);
    TreeNode node3(20);
    TreeNode node4(15);
    TreeNode node5(7);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node4;
    node3.right = &node5;

    vector< vector<int> > result =  s.levelOrderBottom( &node1);
    for (size_t i = 0 ; i < result.size() ; i++){
        for (size_t j = 0 ; j < result[i].size() ; ++j){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // cout << (bool)("abc" == "abc") << endl;

}
