#include "header.h"

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() <2 ) return s;
        int totalLength = s.size();
        int start = 0 , length = 0, i = 0;
        int begin = 0, end = 0, increment = 0;
        while( i < totalLength && totalLength - i > length/2 ){
            start = i ;
            increment = 0;
            while (start < totalLength && s[start + 1] == s[i]) start++;
            while (i >= increment && s[start + increment] == s[i - increment]){
                increment++;
            }
            increment--;
            if (end - begin <= increment * 2 + start - i){
                begin = i - increment;
                end = start + increment + 1;
            }
            i++;
        }
        return s.substr(start, end - start);
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
    cout << s.findMedianSortedArrays(nums, nums2) << endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
