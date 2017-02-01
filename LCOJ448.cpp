#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <iostream>

using std::vector;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        std::sort(nums.begin(), nums.end());

        vector<int> result;
        int num = 1;

        for (int i = 0; i < nums.size() ; ++i){
            while (nums[i] != num){
                if (nums[i] > num){
                    result.push_back(num);
                    ++num;
                }else{
                    break;
                }
            }
            if (nums[i] == num) ++num;
        }

        while (num <= nums.size()){
            result.push_back(num);
            ++num;
        }

        return result;
    }
};

int main(){
    Solution s;
    int myints[]= {1,5,5,5,3};
    vector<int> test(myints, myints + 5);
    vector<int> out = s.findDisappearedNumbers(test);

    for (size_t i = 0; i < out.size() ; ++i){
        std::cout << out[i] << "  " << std::endl;
    }

}
