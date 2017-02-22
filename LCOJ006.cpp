#include "header.h"

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (s.empty()) return s;
        if (numRows == 1) return s;
        vector<queue<char> > lines(numRows);
        int row = -1;
        bool down = true;
        for (int i = 0 ; i < s.size() ; ++i){
            if (down){
                row++;
                lines[row].push(s[i]);
            }else{
                row--;
                lines[row].push(s[i]);
            }
            if (row == numRows -1) {
                down = false;
                // row--;
            }else if (row == 0){
                down = true;
                // row++;
            }
        }
        string result = "";
        for (queue<char> s : lines){
            while (!s.empty()){
                result += s.front();
                s.pop();
            }
        }
        return result;
    }

    string convert(string s, int numRows){
        if (numRows == 1) return s;
        if (s.empty()) return s;
        string result(s);
        int size = 2*numRows -2;
        vector<int> start(numRows,0);

        for(int i = 1 ; i < numRows ; ++i){
            if (i == 1) start[i] = start[i-1] + s.size() / size;
            else start[i] = start[i - 1] + 2 * (s.size() / size);
        }
        int left = s.size() % size;
        for (int j = 1 ; j < left ; ++j){
            if (j < numRows){
                for (int i = j ; i < numRows ; ++i) start[i]++;
            }else{
                for (int i = size - j + 1 ; i < numRows ; ++i) start[i]++;
            }
        }

        int line = 1, loc  = 0;
        bool down = true;
        for(int i = 0 ; i < s.size() ; ++i){
            if (down) line++;
            else line--;
            result[start[line]] = s[i];
            start[line]++;
            if (line == 0) down = true;
            if (line == numRows) down = false;
        }
        return result;
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
    cout << s.findMaxLength(nums) << endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
