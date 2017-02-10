#include "header.h"

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> solver;
        string result = "";

        for (int i = 0 ; i < s.size() ; ++i) if ( isVowel(s[i])) solver.push_back(s[i]);
        if(solver.empty()) return s;
        vector<char>::iterator it = solver.end()-1;
        for (int i = 0 ; i < s.size() ; ++i){
            if(isVowel(s[i])){
                result += *it;
                it--;
            }
            else result += s[i];
            cout << *it << endl;
        }
        return result;
    }

    bool isVowel(char c){
        switch (c){
            case 'a': return true;
            case 'A' : return true;
            case 'e' : return true;
            case 'i' : return true;
            case 'o' : return true;
            case 'u' : return true;
            case 'E' : return true;
            case 'I' : return true;
            case 'O' : return true;
            case 'U' : return true;
        }
        return false;
    }
};


int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    TreeNode node1(3);
    TreeNode node2(9);
    TreeNode node3(20);
    TreeNode node4(15);
    TreeNode node5(7);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node4;
    node3.right = &node5;

    cout <<  s.reverseVowels( " ");

    // cout << (bool)("abc" == "abc") << endl;

}
