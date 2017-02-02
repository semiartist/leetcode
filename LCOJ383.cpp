#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <iterator>

using std::vector;
using std::string;
using std::cout;
using std::endl;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<char> note(ransomNote.begin() , ransomNote.end());
        vector<char> mag(magazine.begin() , magazine.end());

        sort(note.begin() , note.end());
        sort(mag.begin() , mag.end());
        unsigned int i = 0, j = 0;

        while ( i < mag.size() && j < note.size()){
            while (mag[i] != note[j]){
                i++;
                if (i == mag.size()) return false;
            }
            i++;
            j++;
        }

        if (j == note.size() ) return true;
        else return false;

    }

    // there is a soluttion about constructing a vector which contains 26 letters
    // and looping through both string, add one when find a match, and subscripe
    // when find match in the note;
};


int main(){
    Solution s;
    string str1 = "apple";
    string str2 = "baelp";
    cout << s.canConstruct(str1, str2);
    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
