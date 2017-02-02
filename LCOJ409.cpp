#include "header.h"

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> solver;
        // build the solver;
        for (char c:s) solver[c]++;

        map<char, int>::iterator it = solver.begin();
        int result = 0;
        bool flag = false;
        while(it!= solver.end()){
            if(it->second%2 == 0) result += it->second;
            else {
                result += (it->second -1);
                flag = true;
            }
            ++it;
        }
        if (flag) result++;
        return result;

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
