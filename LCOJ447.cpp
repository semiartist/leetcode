#include "header.h"

using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int result = 0;
        for (size_t i = 0 ; i < points.size() ; ++i){
            map<double, int> distance;
            for (size_t j = 0 ; j < points.size() ; ++j){
                if ( j == i) continue;
                double thisDis = hypot(points[i].first - points[j].first , points[i].second - points[j].second);
                result += 2* distance[thisDis]++;
            }
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {0,2,1};
    vector<int> nums2 = {1,2,3,4,5,6,7,8,9,12,15,1,2,4,9};
    ListNode *node1 = new ListNode(1);

    // cout<< s.missingNumber(nums1)<< endl;;
    int a = 5 ;
    int b = 4 ;
    int c = a^b;

    cout << c;
    //
    // vector<string> result = s.readBinaryWatch(4);

    // vector<int> result = s.missingNumber(nums1, nums2);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
