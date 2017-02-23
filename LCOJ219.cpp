#include "header.h"

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> solver;
        for (size_t i = 0 ; i < nums.size() ; ++i){
            if (solver.find(nums[i]) == solver.end()){
                solver[nums[i]] = i;
                continue;
            }
            if (i - solver[nums[i]] <= k) return true;
            solver[nums[i]] = i;
        }
        return false;
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
