#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <iterator>

using std::vector;
using std::string;
using std::cout;
using std::endl;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>::iterator front = numbers.begin();
        vector<int>::iterator end = numbers.end()-1;
        // make sure the end is smaller than the tareget;
        // while(*end >= target) --end;

        while((*front) + (*end) != target){
            if ((*front) + (*end) > target){
                end--;
            }else{
                front++;
            }
        }
        int first = front - numbers.begin();
        int second = end - numbers.begin()+1;
        return {first, second};

    }
};


int main(){
    vector<int> numbers = {-1,0};
    int target = 0;
    Solution s;
    vector<int> result = s.twoSum(numbers, target);
    cout << result[0] <<" " << result[1];

}
