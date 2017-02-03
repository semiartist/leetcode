#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;
        ListNode *preNode = nullptr;
        ListNode *nextNode = nullptr;
        ListNode *newNode = nullptr;
        while(head != nullptr){
            newNode = new ListNode(head->val);
            newNode->next = nextNode;
            nextNode = newNode;
            newNode = nullptr;
            head = head->next;
        }

        return nextNode;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1};
    ListNode *node1 = new ListNode(1);

    // cout<< s.howManyOnes(30);
    //
    // vector<string> result = s.readBinaryWatch(4);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }
    cout << s.romanToInt("DCXXI");

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
