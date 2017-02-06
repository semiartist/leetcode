#include "header.h"

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        constructCharMap();
        vector<string> result;
        for(int j = 0 ; j < words.size() ; ++j){
            string s( words[j]);
            bool equal = true;
            for(int i = 1 ; i < s.size() ; i++){
                if (s[i] < 'a') s[i] += 32;
                if(s[i-1] < 'a') s[i-1] += 32;
                if(row[s[i-1]] != row[s[i]]) {
                    equal = false;
                }
            }
            if (equal) result.push_back(words[j]);
        }
        return result;
    }
private:
    void constructCharMap(){
        row['a'] = 2;
        row['b'] = 3;
        row['c'] = 3;
        row['d'] = 2;
        row['e'] = 1;
        row['f'] = 2;
        row['g'] = 2;
        row['h'] = 2;
        row['j'] = 2;
        row['k'] = 2;
        row['l'] = 2;
        row['m'] = 3;
        row['n'] = 3;
        row['o'] = 1;
        row['p'] = 1;
        row['q'] = 1;
        row['r'] = 1;
        row['s'] = 2;
        row['t'] = 1;
        row['u'] = 1;
        row['v'] = 3;
        row['w'] = 1;
        row['x'] = 3;
        row['y'] = 1;
        row['z'] = 3;
        row['i'] = 2;


    }
    map<char, int> row;
};

int main(){
    Solution s;
    vector<int> nums1 = {0,2,1};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9,12,15,1,2,4,9};
    ListNode *node1 = new ListNode(1);
    TreeNode tnode1(1);
    TreeNode node2(2);
    TreeNode node3(3);
    TreeNode node4(4);
    TreeNode node5(2);
    tnode1.left = &node2;
    tnode1.right = &node3;
    node2.left = &node4;
    node2.right = nullptr;
    node3.left  = &node5;
    vector<string> name = {"asdfghjkl","qwertyuiop","zxcvbnm"};
    vector<string> result = s.findWords(name);
    for(size_t i = 0 ; i < result.size() ; ++i){
        cout << result[i] << endl;
    }

    // cout<< s.missingNumber(nums1)<< endl;;
    // cout << s.addStrings("9" , "99");
    //
    // vector<string> result = s.readBinaryWatch(4);

    // vector<int> result = s.missingNumber(nums1, nums2);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
