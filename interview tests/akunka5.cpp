#include "header.h"

using namespace std;

class Solution {
public:
    int find_two_closest_and_sum(vector < int > int_list, int target_num) {
        if (int_list.empty()) return 0;
        int big = 0;
        int tres1 = abs((int_list[0]) - (target_num) );
        int tres2 = abs((int_list[0]) - (target_num) );
        int small = 0;
        for (int s : int_list){
            if (abs((s) - (target_num)) <= tres2){
                tres2 = abs((s) - (target_num));
                big = small;
                small = s;
            }else if (abs((s) - (target_num)) <= tres1){
                tres1 = abs((s) - (target_num));
                big = s;
            }

            // cout <<s << " " << big << "  " << small << endl;
            // cout << tres1 << " " << tres2 << endl;
        }

        return big + small;

    }

};


int main(){
    Solution s;
    vector<int> nums = {10,-15,-14,-9,6,0,7,-29};
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
    cout << s.find_two_closest_and_sum(nums, 5);
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
