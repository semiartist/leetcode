#include "header.h"

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        string result = "";
        if (size == 0) return result;
        if (size == 1) return strs[0];
        int length = strs[0].size();
        int i = 0;
        int j = 0;
        while (i < length){
            j = 1;
            while ( j < size){
                if (strs[j].size() <= i) return result;
                if (strs[j-1][i] != strs[j][i]) return result;
                j++;
            }
            result += strs[--j][i++];
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

    cout << s.intToRoman(349);

}
