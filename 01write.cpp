#include "header.h"

using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalSize = nums1.size() + nums2.size();
        if (totalSize == 1) return nums1.size() ? nums1[0] : nums2[0];
        vector<int> solver(totalSize/2);
        int i = 0 , j = 0, k = 0;
        while (k < totalSize/2){
            if (i != nums1.size() && j != nums2.size()){
                if (nums1[i] < nums2[j]) {
                    solver[k++] = nums1[i++];
                }else {
                    solver[k++] = nums2[j++];
                }
            }else if (i != nums1.size()){
                solver[k++] = nums1[i++];
            }else {
                solver[k++] = nums2[j++];
            }
        }
        if (totalSize %2 == 1){
            return (double)solver[totalSize/2];
        }else{
            return ( (double)(solver[totalSize/2] + solver[totalSize/2 -1]) / 2);
        }
    }
};
/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue obj = new MyQueue();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.peek();
* bool param_4 = obj.empty();
*/


int main(){
    Solution s;
    vector<int> nums = {1,2,4,5};
    vector<int> nums2 = {3,6};

    // node part test;
    TreeNode node1(3);
    TreeNode node2(1);
    TreeNode node3(5);
    TreeNode node4(0);
    TreeNode node5(2);
    TreeNode node6(4);
    TreeNode node7(6);
    node1.left = &node2;
    node1.right = &node3;
    // node3.left = &node6;
    // node3.right = &node7;
    // node2.left = &node4;
    // node2.right = &node5;
    string start = "AACCGGTT";
    string end = "AACCGGTA";
    vector<string> test = {"AACCGGTA","AACCGCTA","AAACGGTA"};
    //test output
    // 1
    // vector<int> result =s.twoSum(nums, 7);
    // 2
    cout << s.findMedianSortedArrays(nums, nums2) << endl;
    // cout << 2147483647 * 2 << endl;
    // for (size_t i = 0 ; i < result.size() ; i++){
    //     cout << result[i] << "  ";
    // }
    // cout << endl;

    // cout << s.findLeftMostNode(&node1) << endl;

    // cout << (bool)("abc" == "abc") << endl;

}
