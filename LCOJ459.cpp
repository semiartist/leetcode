#include "header.h"

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        // special case;
        if (str.size()< 2)  return false;

        bool found = false;
        if (str.size() %2 == 0){
            for (size_t i = 0 ; i < str.size()/2 ; i++){
                if(str[i] != str[str.size()/2 + i]) {
                    found = true;
                    break;
                }
            }
            if (!found) return true;
        }
        // chop it into two pieces;
        size_t start = 0 , end = 0;
        size_t mvStart = 0 , mvEnd = 0;
        end = 1;

        for(size_t i = 1 ; i < str.size() ; ){
            int length = end - start;
            mvStart = i;
            found = false;

            for (size_t j = 0 ; j < length ; ++j){
                if (str[start + j] != str[mvStart +j]) {
                    found = true;
                    if(j == 0) end = mvStart + j+1;
                    else end = mvStart + j;
                    break;
                }
            }
            cout << "mvStart-> " << mvStart << " End -> " << end << endl;
            if (found) {
                i++;
                if (i > str.size()/2) return false;
            } else i+= length;
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-2,-1};
    vector<int> newNums(25,1);
    cout << s.repeatedSubstringPattern("abaababaab") << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
