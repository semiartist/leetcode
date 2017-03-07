#include "header.h"

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        if (s.size() == 0) return 0;
        if(s.size() == 1) return 1;
        int result = 0;
        int way1 = 1;
        int way2 = 1;
        for (size_t i = 1 ; i < s.size() ; ++i){
            if((!valid (s[i]) )&& (!valid(s[i-1] , s[i]))) return 0;
            if (valid(s[i])) result = way1;
            if (valid(s[i - 1], s[i])) result += way2;

            way2 = way1;
            way1 = result;
        }
        return result;
    }
private:
    bool valid(char a, char b){
        if (a == '1' || (a == '2' && b <= '6')) return true;
        return false;
    }
    bool valid (char a){
        return !(a == '0');
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,5,7,8,56};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;

    int ss = 9&8;

    cout << ss;

}
