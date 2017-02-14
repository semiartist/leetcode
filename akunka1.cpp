#include "header.h"

using namespace std;

class Solution {
public:
    pair<int, int> find_sum_and_avg(vector<int> ints) {
        int sum = 0 , avg = 0;
        size_t count = 0;
        for (count = 0 ; count < ints.size() ; count+= 2){
            sum += ints[count];
        }
        pair<int, int> result;
        result.first = sum;
        result.second = sum / (count / 2);

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
    s.StairCase(6);
    // cout << 2147483647 * 2 << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
