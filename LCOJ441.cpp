#include "header.h"

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        if (n ==1) return n;
        long int i = 1;
        long int k = 1;
        while(i <= n){
            ++k;
            i += k;
        }
        return k-1;
    }
};


int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(1);
    TreeNode node2(2);
    TreeNode node3(2);
    TreeNode node4(3);
    TreeNode node5(3);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node4;
    node2.right = &node5;

    cout << s.arrangeCoins( 2147483647) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
