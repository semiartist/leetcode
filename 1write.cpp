#include "header.h"

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string current = "";
        vector<string> result;
        construct(result, current, n, 0);
        return result;
    }
private:
    void construct(vector<string> & result, string current, int left, int right){
        if (left == 0 && right == 0) {
            result.push_back(current);
            return;
        }
        if (left > 0){construct(result, current+"(", left-1,right+1) ;}
        if (right > 0) construct(result, current+")", left, right-1);
    }
};

int main (){
    Solution s;
    vector<int> nums = {1, 0,-1,0,-2,2};
    cout << s.fourSum(nums, 0).size()<< endl;
}
