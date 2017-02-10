#include "header.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > result;
        if (numRows >= 1){
            vector<int> row = {1};
            result.push_back(row);
        }
        if (numRows >= 2){
            vector<int> row = {1, 1};
            result.push_back(row);
        }
        int i = 2;
        while (i < numRows){
            int size = result.size();
            vector<int> row(result[size-1]);
            row.push_back(1);
            // cout << " --> HERE <-- " << endl;
            for (int i = row.size() -2; i > 0 ; --i){
                row[i] = row[i] + row[i-1];
            }
            result.push_back(row);
            i++;
        }

        return result;
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

    s.generate(5);

    // cout << (bool)("abc" == "abc") << endl;

}
