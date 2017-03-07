#include "header.h"

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int result = 0;
        int solver = 0;
        for (int i = 0 ; i < s.size() ; ++i){
            if (s[i]!=' '){
                solver++;
            }
            if (s[i] == ' ' && solver != 0){
                result = solver;
                solver = 0;
            }
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,5,7,8,56};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;


    ListNode * head = s.removeElements(&node1, 1);

}
