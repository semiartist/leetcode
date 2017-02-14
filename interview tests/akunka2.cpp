#include "header.h"

using namespace std;

class Solution {
public:
    vector < int > remove_n_duplicates(int n, vector < int > int_array) {
        map<int, int> solver;
        for (int s : int_array) solver[s]++;
        vector<int> result;
        map<int, int>::iterator it = solver.begin();
        while(it != solver.end()){
            if(it->second == n) solver.erase(it);
            else {
                while(it->second != 0){
                    result.push_back(it->first);
                    (it->second)--;
                }
            }
            it++;
        }
        return result;
    }

};


int main(){
    Solution s;
    vector<int> nums = {4,4,4,1,3,1,2,1};
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
    vector<int> result =s.remove_n_duplicates(3, nums);
    // cout << 2147483647 * 2 << endl;
    for (size_t i = 0 ; i < result.size() ; i++){
        cout << result[i] << "  ";
    }

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
