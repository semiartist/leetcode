#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr && l2 == nullptr) return nullptr;
        if (l1 == nullptr || l2 == nullptr )return (l1 == nullptr ? l2 : l1);
        ListNode * perRoot = nullptr;
        ListNode * root = nullptr;
        if (l1->val > l2->val){
            root = l2;
            l2 = l2->next;
        }else{
            root = l1;
            l1 = l1->next;
        }
        perRoot = root;
        while ( l1 != nullptr && l2 != nullptr){
            if (l1->val <= l2->val) {
                root->next = l1;
                l1 = l1->next;
            }else {
                root->next = l2;
                l2 = l2->next;
            }
            root = root->next;
        }

        if (l1 == nullptr || l2 == nullptr){
            root->next = (l1 == nullptr ? l2 : l1);
        }

        return perRoot;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(3);
    TreeNode node2(9);
    TreeNode node3(20);
    TreeNode node4(15);
    TreeNode node5(7);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node4;
    node3.right = &node5;

    vector< vector<int> > result =  s.levelOrderBottom( &node1);
    for (size_t i = 0 ; i < result.size() ; i++){
        for (size_t j = 0 ; j < result[i].size() ; ++j){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // cout << (bool)("abc" == "abc") << endl;

}
