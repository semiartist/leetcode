#include "header.h"

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        vector<int> numbers;
        for(char c : s) {
            if (c == 'I') numbers.push_back(1);
            if (c == 'V') numbers.push_back(5);
            if (c == 'X') numbers.push_back(10);
            if (c == 'L') numbers.push_back(50);
            if (c == 'C') numbers.push_back(100);
            if (c == 'D') numbers.push_back(500);
            if (c == 'M') numbers.push_back(1000);
        }

        int total = 0, stock, sub;
        sub = numbers[0];
        stock =sub;
        if (numbers.size() ==1) return sub;
        for (size_t i = 1 ; i < numbers.size() ; i++){
            cout << total << " " << stock << " " << sub<<endl;
            if(numbers[i] < numbers[i-1]) { // next number is smaller
                total += stock;
                sub = numbers[i];
                stock = numbers[i];
            }
            if (numbers[i] == numbers[i-1]){ // next number is equal
                total += stock;
                stock = numbers[i];
                sub = 0;
            }
            if (numbers[i] > numbers[i-1]){ // next number is bigger
                stock = numbers[i] - sub;
                sub = 0;
            }
        }

        total += stock;
        return total;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1};
    ListNode *node1 = new ListNode(1);

    // cout<< s.howManyOnes(30);
    //
    // vector<string> result = s.readBinaryWatch(4);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }
    cout << s.romanToInt("DCXXI");

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
