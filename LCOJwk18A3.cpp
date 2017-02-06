#include "header.h"

using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>& Capital) {
        int earned = 0;
        map<int, int> control;
        vector<int> revenue;
        while( k > 0){
            map<int, int> indexs;
            int index = 0;
            int potential = 0;
            for(size_t i = 0 ; i < Capital.size() ; ++i){
                // revenue[i] = Capital[i] + Profits[i];
                if (control[i] >0) continue;
                int c = Capital[i];
                int revenue = Profits[i] + c;
                if (W - c >= 0 && revenue > potential){
                    indexs.clear();
                    indexs[i] = revenue;
                    potential = revenue;
                }else if (W - c >= 0 && revenue == potential){
                    indexs[i] = revenue;

                }
            }

            map<int, int>::iterator it = indexs.begin();
            int spend = 0;
            int result = 0;
            if (it != indexs.end()){
                index = it->first;
                result = it->second;
                it++;
            }
            while (it != indexs.end()){
                if(it->second < result){
                    result = it->second;
                    index = it->first;
                }
                it++;
            }
            control[index] ++;
            if(!indexs.empty()){
                earned += result - Capital[index];
                W += Profits[index];
                cout << "W -> " << W << "earned -> " << earned <<endl;
            }
            k--;
        }
        return earned;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {1,1,2};
    ListNode *node1 = new ListNode(1);
    TreeNode tnode1(5);
    TreeNode node2(2);
    TreeNode node3(-3);
    // TreeNode node4(4);
    // TreeNode node5(2);
    tnode1.left = &node2;
    tnode1.right = &node3;
    // node2.left = &node4;
    // node2.right = nullptr;
    // node3.left  = &node5;
    cout << s.findMaximizedCapital(1,2,nums1, nums2);


    // cout<< s.missingNumber(nums1)<< endl;;
    // cout << s.addStrings("9" , "99");
    //
    // vector<string> result = s.readBinaryWatch(4);

    // vector<int> result = s.missingNumber(nums1, nums2);
    // for(size_t i = 0 ; i < result.size() ; ++i){
    //     cout << result[i] << endl;
    // }

    delete node1;

    // for (size_t i = 0 ; i < numbers.size() ; ++i) cout << numbers[i] << " ";

}
