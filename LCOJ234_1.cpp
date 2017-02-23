#include "header.h"

using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> solver;
        while (head != nullptr){
            solver.push_back(head -> val);
            head = head -> next;
        }
        vector<int>::iterator front = solver.begin();
        vector<int>::iterator end = solver.end()-1;
        while(front - solver.begin() < end - solver.begin()){
            if (*front != *end) return false;
            ++front ;
            --end;
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<int> nums = {   1,1,1,1,1,1,1,0,0,0,0,1,1,0,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,1,1,0,0,0,1,0,0,0,1,1,1,0,1,1,0,1,0,0,1,1,0,1,0,0,1,1,1,0,0,1,0,1,1,1,0,0,1,0,1,1};
    vector<int> nums2 = {3,6};

    string str1 = "abab";
    string str2 = "cat dog cat dog";
    cout << s.isPalindrome(node1) << endl;
    // cout << '1' - '0'<<endl;
    // cout << '4' - '0'<<endl;
    // cout << '8' - '0'<<endl;
    // cout << '9' - '0'<<endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    delete node6;
}
