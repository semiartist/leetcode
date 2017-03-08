#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) return head;
        ListNode * temp = head;
        int i = 0;
        ListNode * pre = nullptr;
        ListNode * current = nullptr;
        while (i < k && head != nullptr ){
            pre = current;
            current = head;
            head = head -> next;
            current->next = pre;
            ++i;
        }
        // deal with the first revers is not finish;
        if (i != k){
            head = current;
            pre = nullptr;
            current = nullptr;
            while ( head != nullptr ){
                pre = current;
                current = head;
                head = head -> next;
                current->next = pre;
                ++i;
            }
            return current;
        }
        temp -> next = head;
        while (temp != nullptr){
            temp = reversK(temp, k);
        }
        return current;

    }
private:
    ListNode * reversK(ListNode * head, int k){
        ListNode * temp = head;
        ListNode * first = nullptr;
        head = head -> next;
        int i = 0;
        ListNode * pre = nullptr;
        ListNode * current = nullptr;
        while (i < k && head != nullptr ){
            if (i == 0) first = head;
            pre = current;
            current = head;
            head = head -> next;
            current->next = pre;
            ++i;
        }
        // deal with the first revers is not finish;
        if (i != k){
            head = current;
            pre = nullptr;
            current = nullptr;
            while ( head != nullptr ){
                pre = current;
                current = head;
                if (pre!=nullptr) cout << "pre -> " << pre->val<<endl;
                if (current != nullptr) cout << "current -> " << current->val << endl;

                head = head -> next;
                current->next = pre;
                if (current->next!=nullptr) cout << "-- next -> " << current->next->val<<endl;
                if (current != nullptr) cout << "-- current -> " << current->val << endl;

            }
        }
        temp -> next = current;
        if (i != k) return nullptr;
        first -> next = head;
        return first;
    }
};
int main (){
    Solution s;
    ListNode list1(1);
    ListNode list2(2);
    ListNode list3(3);
    ListNode list4(4);
    ListNode list5(5);
    ListNode list6(6);
    list1.next = &list2;
    list2.next = &list3;
    list3.next = &list4;
    list4.next = &list5;
    list5.next = &list6;
    ListNode * root = s.reverseKGroup(&list1, 4);
    while (root != nullptr) {
        cout << root -> val << " -> " ;
        root = root->next;
    }
    cout << endl;
}
