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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>::iterator it = nums.begin();
        int length = 0;
        int max = 0;
        while(it != nums.end()){
            length = (length + (*it)) *  (*it);

            it++;

            if (length > max) max = length;

        }

        return max;
    }
};

int main(){
    Solution s;

    cout << s.findMaxConsecutiveOnes({});
}
