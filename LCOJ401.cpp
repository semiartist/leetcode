#include "header.h"

using namespace std;

class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> result;
        // construct 2 maps for hr and min
        map<int, int> hr;
        map<int, int> min;
        for (int i = 0 ; i <= 59 ; ++i){
            if (i < 12) hr[i] = howManyOnes(i);
            min[i] = howManyOnes(i);
        }
        //all the possible lights on hrs
        int hrMax = 3;
        int minMax = 5;
        vector<int> hrV;
        vector<int> minV;
        for (int i = 0 ; i <= num ; ++i){
            int hrL = i;
            int minL = num - i;
            if(hrL > hrMax || minL > minMax) continue;
            // calculate hr possibility
            hrV.clear();
            minV.clear();
            map<int, int>::iterator it1 = hr.begin();
            map<int, int>::iterator it2 = min.begin();
            while(it1 != hr.end()) {
                if (it1->second == hrL) hrV.push_back(it1->first);
                it1++;
            }

            while(it2 != min.end()) {
                if (it2->second == minL) minV.push_back(it2->first);
                it2++;
            }

            for(size_t j = 0 ; j < hrV.size() ; ++j){
                string hrString=to_string(hrV[j]);

                for (size_t k = 0 ; k < minV.size() ; ++k){
                    string minString=to_string(minV[k]);
                    if (minV[k] <10) minString = "0" +minString;
                    result.push_back(hrString + ":"+minString);

                }
            }
            // calculate min possibility

        }
        return result;
    }

    int howManyOnes(int a){
        if ( a == 0) return 0;
        int result = 0;
        int c= a , d = 5;
        while (d!=-1){
            int denominator = pow(2 , d);
            result +=  c/denominator;
            c = c%denominator;
            d--;
        }

        return result;

    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1};
    ListNode *node1 = new ListNode(1);

    // cout<< s.howManyOnes(30);
    //
    // vector<string> result = s.readBinaryWatch(4);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }

    bitset<6> name(30);
    cout << name;

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
