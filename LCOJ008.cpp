#include "header.h"

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        long long int result = 0;
        bool flag = false;
        bool number = false;
        // bool sign = false;
        for (char s : str){
            // cout << result << endl;
            if(s == ' '&& !number) continue;
            if (s == '-'&&!number) {
                flag = true;
                number = true;
                continue;
            }
            if (s == '+' && !number) {
                flag = false;
                number = true;
                continue;
            }
            if (number){
                if (s - '0' < 10&& s - '0' >= 0) result = result * 10 + (s - '0');
                else break;
            }
            if (!number){
                if (s - '0' < 10 && s - '0' >= 0){
                    result = result * 10 +(s - '0');
                    number = true;
                }else return 0;
            }
            if (result > 2147483647) break;

        }
        if (flag) result *= (-1);
        if (result > 2147483647 ) return 2147483647;
        if (result < -2147483648) return -2147483648;
        return (int)result;
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
    cout << s.myAtoi("   +1") << endl;
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
