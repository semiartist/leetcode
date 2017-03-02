#include "header.h"

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.size()-1;
        int j = b.size()-1;
        int step = 0;
        while (i >=0 || j >= 0){
            if (i >= 0 && a[i--] == '1') ++step;
            if (j >=0 && b[j--] == '1') ++step;
            if (step ==3 ){
                step = 1;
                result = "1" + result;
            }else if (step == 2){
                step = 1;
                result = "0" + result;
            }else if (step == 1){
                step = 0;
                result = "1" + result;
            }else{
                step = 0;
                result = "0" + result;
            }
        }
        if (step) result = "1" + result;
        return result ;

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
