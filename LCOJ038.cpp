#include "header.h"

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        int i = 1;
        vector<int> one;
        vector<int> two;
        vector<int>::iterator it1, it2;
        one.push_back(1);
        while (i < n){
            if (i % 2 == 1) {
                // Read one and write to Two
                it1 = one.begin();
                int pre = *it1;
                int count = 1;
                it1++;
                while (it1 != one.end()){
                    if (*it1 == pre) {
                        count ++;
                    }else {
                        two.push_back(count);
                        two.push_back(pre);
                        count = 1;
                    }
                    pre = *it1;
                    it1++;
                }
                two.push_back(count);
                two.push_back(pre);
                // for (int s : two) cout << s << " ";
            }

            if (i % 2 == 0) {
                // Read one and write to Two
                it2 = two.begin();
                int pre = *it2;
                int count = 1;
                it2++;
                while (it2 != two.end()){
                    if (*it2 == pre) {
                        count ++;
                    }else {
                        one.push_back(count);
                        one.push_back(pre);
                        count = 1;
                    }
                    pre = *it2;
                    it2++;
                }
                one.push_back(count);
                one.push_back(pre);
                // for (int s : one) cout << s << " ";
            }

            // cout << endl;
            if (i % 2 == 1) one.clear();
            else two.clear();
            i++;
            // cout << "  " << n << " " << i << endl;
        }

        string result = "";
        if (i %2 ==1) for(int s : one) result += to_string(s);
        else for (int s: two) result += to_string(s);

        return result;
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
    string ss = s.countAndSay(8);
    cout << ss << endl;
    //test output
    // 1
    // vector<int> result =s.findAnagrams("aaaaaaaaaaaaaaaaaaaaaa", "a");
    // 2
    cout << s.countAndSay(2) << endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
