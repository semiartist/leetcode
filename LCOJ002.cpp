#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int number = 0;
        ListNode * solver = nullptr;
        ListNode * result = solver;
        if (l1 != nullptr) {
            number += l1 -> val;
            l1 = l1 -> next;
        }
        if (l2 != nullptr) {
            number += l2 -> val;
            l2 = l2 -> next;
        }
        solver = new ListNode(number % 10);
        while (l1 != nullptr || l2 != nullptr){
            number = number /10;
            if (l1 != nullptr) {
                number += l1 -> val;
                l1 = l1 -> next;
            }
            if (l2 != nullptr) {
                number += l2 -> val;
                l2 = l2 -> next;
            }
            solver->next = new ListNode(number %10);
            solver = solver ->next;
        }
        if (number >= 10) {
            solver -> next = new ListNode(number /10);
        }
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
    vector<int> nums = {1,2,3,4,5};
    vector<int> newNums(25,1);

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
    // cout << s.twoSum(nums, 7) << endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
