#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        hold = nullptr ;
        ListNode * hold2 = nullptr;
        vector<ListNode *> solver;
        while (head != nullptr){
            solver.push_back(head);
            head = head -> next;
        }
        int ind = solver.size() - n;
        if (ind == 0 && solver.size()>1) {
            // hold2 = solver[1];
            return solver[1];
        } else if (solver.size() == 1) return nullptr;
        else {
            hold2 = solver[0];
            hold = solver[0];
            hold-> next = nullptr;
        }
        for (size_t i = 1 ; i < solver.size() ; ++i){
            if (i != ind) {
                cout <<" added " << endl;
                hold2->next = solver[i];
                hold2 = hold2->next;
            }
        }
        return hold;
    }
private:
    ListNode * hold;
};

int main (){
    Solution s;
    vector<int> nums = {1, 0,-1,0,-2,2};
    cout << s.fourSum(nums, 0).size()<< endl;
}
