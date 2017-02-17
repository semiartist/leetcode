#include "header.h"

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // variables
        int start = 0, end = 0;
        int fast = 0 , slow = 0;
        int length = 0;
        vector<int> solver(256, 0);
        // solver[s[fast]]++;
        // algorithm
        while (fast != s.size()){
            if (solver[s[fast]] == 0){
                solver[s[fast]]++;
                ++fast;
                ++length;
            }else{
                while (slow != fast && solver[s[fast]] == 1 ){
                    --solver[s[slow]];
                    ++slow;
                    --length;
                }
            }
            if (end - start < length){
                start = slow;
                end = fast;
            }
            cout << "--> HERE <-- "<< endl;
            cout << "slow -> " << slow << endl;
            cout << "fast -> " << fast << endl;
            cout << "length -> " << length << endl;
            cout << "begin -> " << start << endl;
            cout << "end -> " << end << endl;
        }
        return end - start ;
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
    vector<int> nums = {1,2,4,5};
    vector<int> nums2 = {3};

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
    cout << s.findMedianSortedArrays(nums, nums2) << endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
