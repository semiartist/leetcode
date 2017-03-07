#include "header.h"

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        int rr = 0;
        while (num !=0 ){
            // cout << result << "  ";
            int digit = num % 10;
            num /=10;
            result = build(rr, digit) + result;
            // cout << result << endl;
            rr += 2;
        }
        return result;
    }
private:
    string storage[7] = {"I","V","X","L","C","D","M"};
    string build(int rr, int number){
        if (number == 0) return "";
        if (number == 1) return ""+ storage[rr + 0];
        if (number == 2) return ""+ storage[rr + 0] + storage[rr + 0];
        if (number == 3) return ""+ storage[rr + 0] + storage[rr + 0]+ storage[rr + 0];
        if (number == 4) return ""+storage[rr + 0] + storage[rr + 1];
        if (number == 5) return ""+storage[rr + 1];
        if (number == 6) return ""+storage[rr + 1] + storage[rr + 0];
        if (number == 7) return ""+storage[rr + 1] + storage[rr + 0] + storage[rr + 0];
        if (number == 8) return ""+storage[rr + 1] + storage[rr + 0] + storage[rr + 0] + storage[rr + 0];
        if (number == 9) return ""+storage[rr] +storage[rr +2];

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
