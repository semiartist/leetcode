#include "header.h"

using namespace std;

class Solution {
public:
    int get_second_most_freq(vector<int> the_list) {
        map<int, int> solver;
        for (int s : the_list) solver[s]++;
        map<int, int>::iterator it = solver.begin();
        int most = -1;
        int sec = 0;
        int result = 0;
        int temp = 0;
        while (it != solver.end()){
            cout << it->first << "  " << it->second << endl;
            cout << most << endl;
            if (it->second >= sec){
                sec = it->second;
                result = it->first;
            }

            if (it->second >= most) {
                sec = most;
                most = it->second;
                result = temp;
                temp = it->first;
            }
            cout << "result -> temp ->"<<result <<"  " << temp<< endl;
            it++;
        }
        return result;

    }

};


int main(){
    Solution s;
    vector<int> nums = {4,1,3,1,4,2,1};
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
    // vector<int> result =s.remove_n_duplicates(3, nums);
    cout << s.get_second_most_freq(nums);
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
