#include "header.h"

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> solver;
        unordered_set<char> key;
        unordered_set<string> value;
        int i = -1;
        string temp = "";
        for (char c : pattern){
            ++i;
            temp.clear();
            while(str[i]!=' ' && i != str.size()){
                temp += str[i];
                i++;
            }
            if (solver.find(c) == solver.end()) {
                solver[c] = temp;
                value.insert(temp);
            } else {
                if (solver[c] != temp) return false;
            }
            if (solver.size() != value.size()) return false;
        }
        if (i != str.size()) return false;
        return true;
    }
};

int main(){
    Solution s;
    vector<int> nums = {   1,1,1,1,1,1,1,0,0,0,0,1,1,0,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,1,1,0,0,0,1,0,0,0,1,1,1,0,1,1,0,1,0,0,1,1,0,1,0,0,1,1,1,0,0,1,0,1,1,1,0,0,1,0,1,1};
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
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    cout << s.wordPattern(str1, str2) << endl;
    // cout << '1' - '0'<<endl;
    // cout << '4' - '0'<<endl;
    // cout << '8' - '0'<<endl;
    // cout << '9' - '0'<<endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
