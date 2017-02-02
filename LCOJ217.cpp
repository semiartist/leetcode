#include "header.h"

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> solver;
        for(int a : nums) {
            if (solver[a] == 1) return true;
            else solver[a] ++;
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1};
    ListNode *node1 = new ListNode(1);

    cout << s.majorityElement(nums1);
    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
