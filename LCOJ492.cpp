#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    // vector<int> constructRectangle(int area){
    //     // vector<int> n;
    //     int n = 0;
    //
    //     for (int i = 1 ; i <= ((int)sqrt(area)) ; ++i){
    //         if(area % i == 0) n = i;
    //     }
    //
    //     int a = area/n;
    //
    //     vector<int> result;
    //     result.push_back(a>n?a:n);
    //     result.push_back(a>n?n:a);
    //
    //     return result;
    //
    //
    // }

    vector<int> constructRectangle(int area){
        int i = (int)sqrt(area);
        while(area % i != 0) --i;
        vector<int> result = {area/i , i};

        return result;
    }

};

int main(){
    Solution s;
    cout << s.constructRectangle(20)[0] << "  " << s.constructRectangle(20)[1];
}
