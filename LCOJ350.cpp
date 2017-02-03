#include "header.h"

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> solver;
        vector<int> result;
        for (int a:nums1) solver[a]++;

        for(int a:nums2) {
            if (solver.find(a) != solver.end() && solver[a]>0) {
                solver[a]--;
                result.push_back(a);
            }
        }

        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,1,2,2,5,5,8,8,6,6,9,9,15};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9,12,15,1,2,4,9};
    ListNode *node1 = new ListNode(1);

    // cout<< s.howManyOnes(30);
    //
    // vector<string> result = s.readBinaryWatch(4);

    vector<int> result = s.intersect(nums1, nums2);
    for(size_t i = 0 ; i < result.size() ; ++i){
        cout << result[i] << endl;
    }

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
