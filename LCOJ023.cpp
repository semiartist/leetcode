#include "header.h"

using namespace std;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> flag(lists.size() , 1);
        vector<int> solver(lists.size() , 0);
        ListNode * newHead = nullptr;
        ListNode * result = nullptr;
        int small = 0;
        int big = 0;
        int pos = 0;
        bool add = true;
        int sum = 0;
        for (size_t i = 0 ; i < lists.size() ; ++i){
            if (lists[i]!= nullptr) {
                solver[i] = lists[i]->val;
                sum += flag[i];
                if (add) {
                    small = solver[i];
                    pos = i;
                    big = solver[i];
                    add = false;
                } else {
                    if (solver[i] < small){
                    small = solver[i];
                    pos = i;
                    }
                    if (solver[i] > big){
                        big = solver[i];
                    }
                }
            }
            else flag[i] = 0;
        }
        if (sum == 0) return result;
        newHead = lists[pos];
        result = newHead;
        //find the smallest
        while (sum){
            sum = 0;
            // update pointer
            small = big;
            lists[pos] = lists[pos]->next;
            if (lists[pos] == nullptr) flag[pos] = 0;
            else solver[pos] = lists[pos]->val;
            int i = 0;
            while (i < lists.size()){
                if (flag[i] != 0){
                    sum += flag[i];
                    if (solver[i] <= small){
                    small = solver[i];
                    pos = i;
                    }
                    if (solver[i] > big){
                        big = solver[i];
                    }
                }
                ++i;
            }
            newHead->next = lists[pos];
            newHead = newHead -> next;
        }
        return result;
        //find the
    }
};

int main (){
    Solution s;
    vector<int> nums = {1, 0,-1,0,-2,2};
    // cout << s.mergeKLists(nums, 0).size()<< endl;
}
