#include "header.h"

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() < 2) return true;
        if (word.size() == 2) {
            if (word[0] < 91) return true;
            else return word[1] > 91;
        }
        bool first = (word[0] < 91);
        bool second = (word[1] < 91);
        if ( (!first) && second) return false;
        for (int i = 2 ; i < word.size() ; i++){
            if (second ){
                if ((word[i] < 91) != second) return false;
            }else {
                if (word[i] < 91) return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,4,5};
    vector<int> nums2 = {3,6};

    // node part test;
    TreeNode node1(3);
    TreeNode node2(1);
    TreeNode node3(5);
    TreeNode node4(0);
    TreeNode node5(2);
    TreeNode node6(4);
    TreeNode node7(6);
    node1.left = &node2;
    node1.right = &node3;
    // node3.left = &node6;
    // node3.right = &node7;
    // node2.left = &node4;
    // node2.right = &node5;
    string start = "AACCGGTT";
    string end = "AACCGGTA";
    vector<string> test = {"AACCGGTA","AACCGCTA","AAACGGTA"};
    //test output
    // 1
    // vector<int> result =s.twoSum(nums, 7);
    // 2
    cout << 'Z +1' << endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
