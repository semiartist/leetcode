#include "header.h"

using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // special case
        bool result = false;
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr ) return false;
        if (p->val == q->val) result = true;
        // else result == false;
        // general case;
        return result && isSameTree(p->left , q->left) && isSameTree(p->right , q->right);
    }
};


int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 5, 8, 6, 5,4};
    ListNode *node1 = new ListNode(1);

    cout<< s.titleToNumber("ABA");

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
