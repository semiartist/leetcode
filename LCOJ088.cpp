#include "header.h"

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        queue<int> solver;
        int i = 0, j = 0;
        while (i<m && j < n){
            if ( nums1[i] < nums2[j]){
                solver.push(nums1[i++]);
            }else{
                solver.push(nums2[j++]);
            }
        }
        while (i < m) solver.push(nums1[i++]);
        while (j<n) solver.push(nums2[j++]);

        nums1.clear();
        while (!solver.empty()){
            nums1.push_back(solver.front());
            solver.pop();
        }
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
