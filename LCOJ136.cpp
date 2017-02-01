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
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.begin()+nums.size());

        for (size_t i = 0; i < nums.size()-1 ; i += 2){
            if (nums[i] != nums[i+1]) return nums[i];
        }
        return nums[nums.size()-1];
    }
};


int main(){
    vector<int>  test = {1,2,3,5,8,7,4,6,5,4,7,8,2,1,3};

    Solution s;
    cout << s.singleNumber(test)<<endl;
}
