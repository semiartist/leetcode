#include "header.h"

using namespace std;

class Solution {
public:
    bool has_non_intersecting_path(int n, pair<int, int> A, pair<int, int> B, pair<int, int> P, pair<int,int> Q) {
        // all on same line
        if (A.first == 0 && B.first == 0 && P.first == 0 && Q.first == 0){
            if ( (A.second - P.second ) * (B.second - P.second ) * (A.second - Q.second ) * (B.second > Q.second ) <= 0 ) {
                return false;
            }
        }
        if (A.first == n && B.first == n && P.first == n && Q.first == n){
            if ( (A.second - P.second ) * (B.second - P.second ) * (A.second - Q.second ) * (B.second > Q.second ) <= 0 ) {
                return false;
            }
        }
        if (A.second == 0 && B.second == 0 && P.second == 0 && Q.second == 0){
            if ( (A.first - P.first ) * (B.first - P.first ) * (A.first - Q.first ) * (B.first > Q.first ) <= 0 ) {
                return false;
            }
        }
        if (A.second == n && B.second == n && P.second ==n && Q.second == n){
            if ( (A.first - P.first ) * (B.first - P.first ) * (A.first - Q.first ) * (B.first > Q.first ) <= 0 ) {
                return false;
            }
        }
        // on different lines
        if ( (abs(A.first - B.first)==n || abs(A.second - B.second)==n) && (abs(P.first - Q.first)==n || abs(Q.second - P.second)==n ) ){
            // for points at 4 lines
            if ((abs(A.first - B.first)==n && abs(P.second - Q.second)==n)) return false;
            if ((abs(P.first - Q.first)==n && abs(A.second - B.second)==n)) return false;
            // 2 of them on same line
            if ((abs(A.first - B.first)==n && abs(P.first - Q.first)==n)){
                if (A.first == P.first) {
                    if (A.second == P.second || B.second == Q.second) return false;
                    if ((A.second - P.second) * (B.second - Q.second) < 0) return false;
                }
                if (A.first == Q.first){
                    if (A.second == Q.second || B.second == P.second) return false;
                    if ((A.second -Q.second) * (B.second - P.second) < 0) return false;
                }
            }
            if ((abs(A.second - B.second)==n && abs(P.second - Q.second)==n)){
                if (A.second == P.second) {
                    if (A.first == P.first || B.first == Q.first) return false;
                    if ((A.first - P.first) * (B.first - Q.first) < 0) return false;
                }
                if (A.second == Q.second){
                    if (A.first == Q.first || B.first == P.first) return false;
                    if ((A.first -Q.first) * (B.first - P.first) < 0) return false;
                }
            }
        }


        return true;
    }

};


int main(){
    Solution s;
    vector<int> nums = {4,4,4,1,3,1,2,1};
    vector<int> newNums(25,1);
    TreeNode node1(3);
    TreeNode node2(1);
    TreeNode node3(5);
    TreeNode node4(0);
    TreeNode node5(2);
    TreeNode node6(4);
    TreeNode node7(6);
    node1.left = &node2;
    node1.right = &node3;
    node3.left = &node6;
    node3.right = &node7;
    node2.left = &node4;
    node2.right = &node5;
    vector<int> result =s.remove_n_duplicates(3, nums);
    // cout << 2147483647 * 2 << endl;
    for (size_t i = 0 ; i < result.size() ; i++){
        cout << result[i] << "  ";
    }

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
