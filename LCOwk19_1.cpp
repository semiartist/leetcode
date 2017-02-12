#include "header.h"

using namespace std;

class Solution {
public:
    string convertTo7(int num) {
        vector<int> solver;
        bool pos = true;
        if (num < 0) {
            pos = false;
            num *= (-1);
        }
        if (num == 0) return "0";

        while (num != 0){
            solver.push_back(num % 7);
            num /= 7;
        }

        string result = "";
        if (!pos) result += "-";
        vector<int>::iterator it = solver.end();
        while(it != solver.begin()){
            it--;
            result += to_string(*it);
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

    cout << s.convertTo7( 0) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
