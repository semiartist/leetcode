#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * hold = head;
        if (head == nullptr ) return hold;
        while (head -> next)
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,5,7,8,56};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;
    s.merge(nums, 6, nums2, 3);
}
