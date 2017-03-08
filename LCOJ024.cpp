#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode * result = nullptr;
        if (head == nullptr || head->next == nullptr ) return head;
        ListNode * temp = head -> next -> next;
        ListNode * pre = head;
        ListNode * post = head->next;
        result = post;
        pre->next = temp;
        post -> next = pre;
        head = temp;
        ListNode * last = pre;
        while (head != nullptr && head->next != nullptr){
            temp = head -> next -> next;
            pre = head;
            post = head -> next;
            pre->next = temp;
            post -> next = pre;
            head = temp;
            last -> next = post;
            last = pre;
        }
        return result;

    }
};
int main (){
    Solution s;
    vector<int> nums = {1, 0,-1,0,-2,2};
    // cout << s.mergeKLists(nums, 0).size()<< endl;
}
