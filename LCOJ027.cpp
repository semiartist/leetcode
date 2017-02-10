#include "header.h"

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a = 0, i = 0;
        stack<int> inventory;
        for (  ; i < nums.size() ; ++i){
            if (nums[i] != val) {
                if (a !=i) nums[a] = nums[i];
                a++;
            }
        }
        while ( a != i){
            nums.pop_back();
            a++;
        }
        return nums.size();
    }
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

    cout <<  s.reverseVowels( " ");

    // cout << (bool)("abc" == "abc") << endl;

}
