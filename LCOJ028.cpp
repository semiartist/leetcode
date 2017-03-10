#include "header.h"

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() < needle.size()) return -1;
        if (haystack.size() == 0 && needle.size() == 0) return 0;
        bool found = false;
        vector<int> solver;
        int ind = 0;
        int k = 0;
        for(int i = 0 ; i < haystack.size() ; ++i){
            if (haystack[i] == needle[0]) solver.push_back(0);
            k = 0;
            if ((solver.empty())) continue;
            while (  k != solver.size()){
                if (solver[k] != -1 && needle[solver[k]] == haystack[i]) {
                    solver[k]++;
                    if (solver[k] == needle.size()) break;
                } else solver[k] = -1;
                // cout << "solver -> " << solver[k] << " " ;
                k++;
            }
            // cout << endl;
            // cout << i << " " <<  k << endl;
            if (solver[k] == needle.size()) {
                found = true;
                ind = i - solver[k] + 1;
                break;
            }
        }
        if(found) return ind;
        return -1;
    }
};


int main (){
    Solution s;
    ListNode list1(1);
    ListNode list2(2);
    ListNode list3(3);
    ListNode list4(4);
    ListNode list5(5);
    ListNode list6(6);
    list1.next = &list2;
    list2.next = &list3;
    list3.next = &list4;
    list4.next = &list5;
    list5.next = &list6;
    // ListNode * root = s.reverseKGroup(&list1, 4);
    string a = "mississippi";
    string b = "issip";
    cout << s.strStr(a, b);
    cout << endl;
}
