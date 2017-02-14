#include "header.h"

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        while ( rowIndex >=0){
            result.push_back(1);
            for (int i = result.size()-2 ; i >0 ; i--){
                            // cout << " --> HERE <--" << endl;
                result[i] += result[i-1];
            }
            rowIndex--;
        }
        return result;
    }
};


int main(){
    Solution s;
    vector<int> nums = {1,1,1,2,2,3,4,5,5,6,7,8,8,9,11,12,13,13};
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

    //test output
    // 1
    vector<int> result =s.getRow(3);
    // 2
    //cout << s.removeDuplicates(nums);
    // cout << 2147483647 * 2 << endl;
    for (size_t i = 0 ; i < result.size() ; i++){
        cout << result[i] << "  ";
    }

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
