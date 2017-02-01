#include <iostream>

class Solution {
public:
    int hammingDistance(int x, int y) {
        int  result;
        while(1){
            // xx = x/2;
            // yy = y/2;
            if (x%2 != y%2) ++result;
            if(x/2 + y/2 == 0) break;
            x = x/2;
            y = y/2;


        }
        return result;
    }
};


int main(){
    Solution s;

    std::cout << s.hammingDistance(5,1) << std::endl;

}
