#include "header.h"

using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // return true;
        if (head == nullptr || head -> next == nullptr){
            return true;
        }

        ListNode * slow = head;
        ListNode * fast = head;
        ListNode * temp = slow;
        ListNode * next = nullptr;

        while (fast -> next != nullptr && fast->next->next != nullptr){
            fast = fast->next->next;
            temp = slow;
            slow = slow->next;
            temp->next = next;
            next = temp;
            // temp = slow;

            // cout << slow -> val << " " << fast -> val << endl;
        }
        if (fast -> next == nullptr){
            if (slow-> val != slow ->next -> val) return false;
            slow = slow -> next;
        }
        while (slow -> next != nullptr && slow -> next -> val == temp -> val){
            slow = slow -> next;
            temp = temp -> next;
        }
        if (slow -> next == nullptr) return true;
        else return false;
    }
};

int main(){
    Solution s;
    vector<int> nums = {   1,1,1,1,1,1,1,0,0,0,0,1,1,0,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,1,1,0,0,0,1,0,0,0,1,1,1,0,1,1,0,1,0,0,1,1,0,1,0,0,1,1,1,0,0,1,0,1,1,1,0,0,1,0,1,1};
    vector<int> nums2 = {3,6};
    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);
    ListNode node5(5);
    ListNode node6(1);
    node1.next = &node2;
    // node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;
    ListNode * head = &node1;
    while (head != nullptr) {
        cout << head -> val << endl;
        head = head -> next;
    }
    head = &node1;
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    cout << s.isPalindrome(head) << endl;
}
