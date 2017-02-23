#include "header.h"

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        bool result = true;
        int size1 =0, size2 = 0;
        // cout << s << " " << p << endl;
        while(result && size1<s.size() && size2< p.size() ){
            cout << "input -> " <<s[size1] << " " << p[size2]<<  endl;
            result = false;
            // if they are equal
            if (s[size1] == p[size2]){
                result = true;
                ++size1;
                ++size2;
                cout << "case 1 -> " << s[size1] << " " << p[size2]<<endl;
                continue;
            }
            //if they are not equal

            // if one of them is dot
            if (s[size1] == '.' || p[size2] == '.'){
                result = true;
                ++size1;
                ++size2;
                cout << "case 2 -> " << s[size1] << " " << p[size2]<<endl;
                continue;
            }
            // if one of them follow by *
            // if they are at the endl
            if ( (size1 == s.size()-1 &&s[size1] == '*'  ) || (size2 == p.size() -1&& p[size2] == '*')){
                if(s[size1] == '*') {
                    bool here = true;
                    while (size2 != p.size()){
                        here = here && p[size2] == p[size2-1];
                        size2++;
                    }
                    cout << "case 7 -> " << s[size1-1] << " " << p[size2-1]<<endl;
                    return (s[size1-1] == '.' || s[size1 - 1] == p[size2 - 1])&&here ;
                }
                else {
                    bool here = true;
                    while (size1 != s.size()){
                        here = here && s[size1] == s[size1-1];
                        if (p[size2 - 1] == '.') here = true;
                        size1++;
                    }
                    cout << "case 8 -> " << s[size1-1] << " " << p[size2-1]<<endl;
                    return (p[size2-1] == '.' ||p[size2 - 1] == s[size1 - 1])&&here ;
                }
            }
            // if one of them is '*'
            if (s[size1] == '*'){
                result = true;
                char current = s[size1-1];
                ++size1;
                --size2;
                while (size1 + 1 < s.size() && s[size1] == current) size1++;
                while(size2 + 1 < p.size() && p[size2] == current) size2++;
                cout << "case 4 -> " << s[size1] << " " << p[size2]<<endl;
                continue;
            }else if(p[size2] == '*'){
                result = true;
                char current = p[size2 - 1];
                ++size2;
                --size1;
                while (size1 + 1 < s.size() && s[size1] == current) size1++;
                while(size2 + 1 < p.size() && p[size2] == current) size2++;
                cout << "case 5 -> " << s[size1] << " " << p[size2]<<endl;
                continue;
            }
            // if not the end;
            // cout << " -- > here < --" << endl;
            if ((size1 + 1 < s.size() && s[size1+1] == '*') || (size2 + 1 < p.size() && p[size2 + 1] == '*')){
                result = true;
                if (s[size1 + 1] == '*') size1+=2;
                else size2+=2;
                cout << "case 3 -> " << s[size1] << " " << p[size2]<<endl;
                continue;
            }
        }
        if (size1 != s.size() || size2 != p.size()) {
            bool endStar = false;
            if (size1 == s.size()){
                endStar = true;
                bool keep = true;
                while(endStar && keep){
                        cout << "HERE" << endl;
                    if (size2 + 1 < p.size()){
                        size2++;
                        if (p[size2] == '*'){
                            endStar = true;
                            continue;
                        } else if(size2 + 1 < p.size() && p[size2 + 1] == '*'){
                            endStar = true;
                            continue;
                        }
                        endStar = false;
                    }else keep = false;
                }
            }else  if (size2 == p.size()){
                endStar = true;

                while(endStar){
                    if (size1 + 1 < s.size()){
                        size1++;
                        if (s[size1] == '*'){
                            endStar = true;
                            continue;
                        }
                        else if(size1 + 1 < s.size() && s[size1 + 1] == '*'){
                            endStar = true;
                            continue;
                        }
                    }
                    endStar = false;
                }
            }
            return false || endStar;
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums = {   1,1,1,1,1,1,1,0,0,0,0,1,1,0,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,1,1,0,0,0,1,0,0,0,1,1,1,0,1,1,0,1,0,0,1,1,0,1,0,0,1,1,1,0,0,1,0,1,1,1,0,0,1,0,1,1};
    vector<int> nums2 = {3,6};

    // node part test;
    TreeNode node1(3);
    TreeNode node2(1);
    TreeNode node3(5);
    TreeNode node4(0);
    TreeNode node5(2);
    TreeNode node6(4);
    TreeNode node7(6);
    node1.left = &node2;
    node1.right = &node3;
    // node3.left = &node6;
    // node3.right = &node7;
    // node2.left = &node4;
    // node2.right = &node5;
    string start = "AACCGGTT";
    string end = "AACCGGTA";
    vector<string> test = {"AACCGGTA","AACCGCTA","AAACGGTA"};
    //test output
    // 1
    // vector<int> result =s.twoSum(nums, 7);
    // 2
    string str1 = "a";
    string str2 = "ab*";
    cout << s.isMatch(str1, str2) << endl;
    // cout << '1' - '0'<<endl;
    // cout << '4' - '0'<<endl;
    // cout << '8' - '0'<<endl;
    // cout << '9' - '0'<<endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
