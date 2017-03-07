#include "header.h"

using namespace std;

class Solution {
public:
    int findLonelyPixel(vector<string>& picture) {
        unordered_map<int, int> solver;
        int result = 0;
        if (picture.size() == 0) return 0;
        if (picture[0].size() == 0) return 0;
        vector<int> hasBlack(picture[0].size() , 0);
        for (size_t i = 0 ; i < picture.size() ; ++i){
            int count = 0;
            int col = 0;
            for (size_t j = 0 ; j < picture[0].size() ; ++j ){
                if (picture[i][j] == 'B') {
                    count ++;
                    col = j ;
                    hasBlack[j]++;
                }
                // if(count == 2) break;
            }
            if (count ==1 ){
                if (solver.find(col) == solver.end()) solver[col]=1;
                else solver[col]++;
                // cout << col << "  " << solver[col] << endl;
            }
        }

        if (solver.size() == 0) return 0;
        unordered_map<int, int>::iterator it= solver.begin();
        // onordered_map<int, int> helper;
        while (it != solver.end()){
            if (it->second == 1 && hasBlack[it->first] == 1) result++;
            it++;
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums = {0,1,2};
    vector<int> nums2 = {2,3,6,};
    string str1 = "abab";
    string str2 = "cat dog cat dog";
    vector< string > picture = {"WWW","WWW","WWB"};
    // cout << s.merge(nums, 6, nums2, 3) << endl;

    cout << (s.findLonelyPixel(picture));

}
