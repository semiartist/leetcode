#include "header.h"

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> solver(s.size(),0);
        unordered_map<int, int> sMap;
        unordered_map<int, int> tMap;

        for (size_t i = 0; i < s.size() ; ++i){
            if (sMap[s[i] - 'a'] == 0) {
                sMap[s[i] - 'a'] = i+1;
                solver[i]++;
            } else solver[sMap[s[i] - 'a']-1]++;
            if (tMap[t[i] - 'a'] == 0) {
                tMap[t[i] - 'a'] = i+1;
                solver[i]--;
            } else solver[tMap[t[i] - 'a'] - 1]--;
            if (solver[tMap[t[i] - 'a'] - 1] < 0) return false;
        }
        return true;
    }
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue obj = new MyQueue();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.peek();
* bool param_4 = obj.empty();
*/


int main(){
    Solution s;
    vector<int> nums = {1,1,1,2,2,3,4,5,5,6,7,8,8,9,11,12,13,13};
    vector<int> newNums(25,1);
    /*
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
    node3.left = &node6;
    node3.right = &node7;
    node2.left = &node4;
    node2.right = &node5;
    */
    //test output
    // 1
    // vector<int> result =s.findAnagrams("aaaaaaaaaaaaaaaaaaaaaa", "a");
    // 2
    cout << s.isIsomorphic("title", "paper") << endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
