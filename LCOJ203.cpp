#include "header.h"

using namespace std;

class Solution {
public:
    ListNode * removeElements(ListNode* head, int val) {
        ListNode * hold = nullptr;
        if (head == nullptr ) return hold;
        ListNode * temp = head;
        bool write = true;
        while (head != nullptr){
            // cout << head -> val <<" " ;
            if (head -> val == val){
                // ListNode * hold = head;
                head = head -> next;
                if (temp != nullptr ) temp -> next = head;
                // delete hold;
                continue;
            }
            if (write && head != nullptr){
                hold = head;
                write = false;
            }
            temp = head;
            head = head -> next;
        }
        return hold;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,5,7,8,56};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;
    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(6);
    ListNode node4(3);
    ListNode node5(4);
    ListNode node6(5);
    ListNode node7(6);
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;
    node6.next = &node7;

    ListNode * head = s.removeElements(&node1, 1);
    while (head != nullptr) {
        cout << head -> val << " -> ";
        head = head -> next;
    }
}
