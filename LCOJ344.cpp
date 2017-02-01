#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>

using std::string;
using std::stringstream;
using std::cout;
using std::endl;


class Solution {
public:
    string reverseString(string s) {

        std::reverse(s.begin(), s.end());

        return s;

        // int size = sizeof(s);
        //
        // std::stringstream result;
        //
        // for (size_t i = 0; i < size ; ++i){
        //   result << s[size-i-1];
        //   cout << s[size-i-1] << "   ";
        // }
        //
        // return result.str();
    }
};


int main(){
    Solution s;
    std::string ss = s.reverseString("hello");

    std::cout << ss << std::endl;

}
