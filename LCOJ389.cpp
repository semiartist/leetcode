#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    char findTheDifference(string s, string t) {
        const char *charS = s.c_str();
        const char *charT = t.c_str();

        char sum;

        for(size_t i = 0; i < s.size() ; ++i ){
            sum ^= charS[i];
            sum ^= charT[i];
        }

        return charT[s.size()]^sum;
    }
};


int main(){
    vector<int>  test = {1,2,3,5,8,7,4,6,5,4,7,8,2,1,3};

    Solution s;
    cout << s.findTheDifference("frank", "fracnk")<<endl;
}
