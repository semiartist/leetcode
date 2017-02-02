#include "header.h"

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> myMap;
        for(size_t i = 0 ; i < nums.size() ; i++){
            myMap[nums[i]]++;
        }

        map<int, int>::iterator it = myMap.begin();

        while(it!=myMap.end()){
            if ((it)->second > nums.size()/2) return it->first;
            it++;
        }

    }
};


int main(){
    Solution s;
    vector<int> nums1 = {1};
    ListNode *node1 = new ListNode(1);

    cout << s.majorityElement(nums1);
    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
