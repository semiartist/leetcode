#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // define variables
        ListNode * hold = head, * result = head;

        // special case;
        if (head == nullptr) return result;

        // then the first step
        int value = head->val;
        head = head->next;

        // then use the loop to determin other part of the list
        while(head != nullptr){
            if (value != head->val)  {
                value = head->val;
                hold->next = head;
                hold = head;
            }
            head = head->next;
        }
        hold->next = nullptr;
        return result;
    }
};

int main(){
    Solution s;

    // TreeNode * node1 = s.sortedArrayToBST(nums2);

    // cout << s.deleteDuplicates(nums, number)<<endl;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
