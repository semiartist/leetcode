#include "header.h"

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        int size = s.size();
        int inc = pow(26, size-1);
        for(char c:s) {
            result += ((c-'A' + 1)*inc );
            inc/=26;
        }
        return result;
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
