#include "header.h"

using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;
        int i = 0;
        while ( slow!= nullptr && fast != nullptr && i < 100000){
            i++;
            slow = slow -> next;
            fast = fast -> next;
            if (fast == nullptr) return false;
            else fast = fast -> next;
            if (slow == fast) return true;
        }
        return false;
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

    cout << s.arrangeCoins( 2147483647) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
