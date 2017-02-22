#include "header.h"

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        bool here = false;
        bool result = true;
        int size1 =0, size2 = 0;
        while(result && size1<s.size() && size2< p.size() ){
            result = false;
            char thisS = s[size1], thisP = p[size2];
            if (s[size1] == p[size2]) {
                result = true;
            }
            if (s[size1] == '*' || p[size2] == '*'){
                // keep search until the first letter which not equals to thisP
                // and p[i] = s[j];
                if (s[size1] == '*' && size1 > 0) thisS = s[size1 - 1];
                if (p[size2] == '*' && size2 > 0) thisP = p[size1 - 1];
                if (thisS != thisP) return false;
                bool search = true;
                while (search && size1 < s.size()){
                    ++size1;
                    if (s[size1] != thisS) search = false;
                }
                search = true;
                while (search && size2 < p.size()){
                    ++size2;
                    if (p[size2] != thisP) search = false;
                }
                continue;

            }
            if (s[size1] == '.' || p[size2] == '.'){
                result = true;
            }
            if (s[size1] != p[size2]){
                if ((size1 + 1 < s.size() && s[size1+1] == '*') ||(size2+1 < p.size()&& p[size2 + 1] == '*')){
                    result = true;
                    if (size1 + 1 < s.size() && s[size1+1] == '*') size1+=2;
                    if (size2+1 < p.size()&& p[size2 + 1] == '*') size2 +=2;
                    continue;
                }
                result = false;
            }
        }
        return here;
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
