#include "header.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::unordered_set;
using std::set;
using std::multiset;

class Solution {
public:
    void deleteNode(ListNode* node) {
        // if node itself if nullptr
        if (node == nullptr) return;
        // if node is the ending node
        if (node->next == nullptr) {
            delete node;
            return;
        }
        // if node is not the ending node
        ListNode *nt = node->next;
        node->val = nt->val;
        node->next = nt->next;

        delete nt;
        return;

    }
};


int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 5, 8, 6, 5,4};
    // vector<int> nums2 = {5,2};
    // vector<int> result = s.intersection(nums1, nums2);
    // for (size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(3);
    ListNode *node4 = new ListNode(4);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    s.deleteNode(node3);

    ListNode *it = node1;
    while(it != nullptr){
        cout<< it->val << "<-";
        it = it->next;
    }
    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
