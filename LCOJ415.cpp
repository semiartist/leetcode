#include "header.h"

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        vector<char> str1, str2;
        vector<char> result;
        string restring = "";
        // for number 1
        for (char c:num1) str1.push_back(c);
        for (char c : num2) str2.push_back(c);

        int it1 = str1.size()-1, it2 = str2.size()-1;
        int i = 0;
        int length1 = num1.size();
        int length2 = num2.size();
        int length = (length1 > length2? length1 : length2);
        int power = 1;
        int leftOver = 0;
        while (i < length){
            int number1 = 0, number2 = 0;
            if(it1 >= 0){
                number1 = (str1[it1]) - '0';
                it1--;
            }
            if (it2 >= 0){
                number2 = (str2[it2]) - '0';
                it2--;
            }

            result.push_back((number1 + number2 + leftOver)%10 + '0' );
            leftOver = (number1 + number2 + leftOver) / 10;
            i++;
            power *= 10;

            // cout << "leftOver -> " << leftOver << "n1 ->" << number1 << " n2->" << number2 << endl;
        }
        if (leftOver != 0) result.push_back(leftOver + '0');

        for (char c : result) restring = c + restring;

        return restring;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {0,2,1};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9,12,15,1,2,4,9};
    ListNode *node1 = new ListNode(1);

    // cout<< s.missingNumber(nums1)<< endl;;
    cout << s.addStrings("9" , "99");
    //
    // vector<string> result = s.readBinaryWatch(4);

    // vector<int> result = s.missingNumber(nums1, nums2);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
