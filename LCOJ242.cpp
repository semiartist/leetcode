#include "header.h"

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> sSet;
        map<char, int> tSet;

        for (char c : s) sSet[c]++;
        for (char c : t) tSet[c]++;

        if(sSet.size() != tSet.size()) return false;
        map<char, int>::iterator it = sSet.begin(), it2;

        while(it != sSet.end()){
            it2 = tSet.find(it->first);
            if(it2 == tSet.end()) return false;
            if (it2->second != it->second) return false;
            tSet.erase(it2);
            it++;
        }
        if (tSet.empty()) return true;
        return false;

    }
};


int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 5, 8, 6, 5,4};
    ListNode *node1 = new ListNode(1);

    cout << s.isAnagram("a", "b");
    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
