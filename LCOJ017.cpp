#include "header.h"

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res0 , res1;
        res0.push_back("");
        res1.push_back("");
        for (size_t i = 0 ; i < digits.size() ; ++i){
            if (i %2 == 0){
                res0.clear();
                size_t innerSize = solver[digits[i] - '2'].size();
                size_t size = res1.size();
                while(size > 0){
                    int j = 0;
                    while (j < innerSize ){
                        string temp = res1[size - 1] + solver[digits[i] - '2'][j];
                        res0.push_back(temp);
                        j++;
                    }
                    size--;
                }
            }else{
                res1.clear();
                size_t innerSize = solver[digits[i] - '2'].size();
                size_t size = res0.size();
                while(size > 0){
                    int j = 0;
                    while (j < innerSize ){
                        res1.push_back(res0[size - 1] + solver[digits[i] - '2'][j]);
                        j++;
                    }
                    size--;
                }
            }
        }
        if (digits.size() %2 == 0) return res1;
        else return res0;
    }

private:
    // vector<string> result;
    vector<char> two = {'a', 'b', 'c'};
    vector<char> three = {'d', 'e', 'f'};
    vector<char> four = {'i', 'h', 'g'};
    vector<char> five = {'j', 'k', 'l'};
    vector<char> six = {'o', 'n', 'm'};
    vector<char> seven = {'p', 'q', 'r', 's'};
    vector<char> eight = {'v', 'u', 't'};
    vector<char> nine = {'w', 'x', 'y', 'z'};
    vector< vector<char> > solver = {two, three, four, five, six, seven, eight, nine};
};

int main(){
    Solution s;
    vector<int> nums = {0,1,2};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    // cout << s.merge(nums, 6, nums2, 3) << endl;

    cout << (s.letterCombinations("23")).size();

}
