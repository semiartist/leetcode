#include "header.h"

using namespace std;

class Solution {
public:
    string toHex(int num) {
        int count = 0;
        if(!num) return "0";
        string result;
        while (num && count < 8)
        {
            int temp = num & 15;
            if (temp<10)    result.push_back('0'+ temp);
            else result.push_back('a'+temp-10);
            num = num >> 4;
            count++;
            for (int i = 0 ; i < result.size() ; ++i){
                cout << result[i] << endl;

            }
            cout << "----------" << endl;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};


int main(){
    Solution s;
    vector< vector<int> > nums1 = {};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9};
    int result = 0;
    cout<< (int)(-3>>4) << endl;
    int i = 1;
    while (i++ < 10){
        cout << (int)(-2 >> 4)<<endl;
    }

    // TreeNode * node1 = s.sortedArrayToBST(nums2);

    cout << s.toHex(-20)<<endl;
    cout << (int)((-20)&15) << endl;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
