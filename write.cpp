#include "header.h"

using namespace std;


bool func (int i,int j) { return (i>j); }

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) return result;
        int row = matrix.size();
        int col = matrix[0].size();
        int i = 0, j = 0 ;
        result.push_back(matrix[i][j]);
        bool goingRight = false;
        bool goingDown = false;
        bool goingLeft = false;
        bool goingUp = false;
        while ( true){
            bool moved = true;
            // direction capability
            bool leftOK = true;
            bool rightOK = true;
            bool downOK = true;
            bool upOK = true;

            if (j == 0) leftOK = false;
            if (j == col - 1) rightOK = false;
            if (i == 0) upOK = false;
            if (i == row - 1) downOK = false;
            if (!rightOK && !downOK) break;
            // define
            // first step;
            if (!goingRight && !goingLeft && !goingUp && !goingDown){
                if (rightOK){
                    j++;
                    moved =false;
                    goingRight = true;
                    downOK = true;
                }else if (downOK){
                    goingDown = true;
                    i++;
                    moved = false;
                }
                else break;
            }

            // right ok?
            if (goingRight && moved){
                if (goingUp){
                    if(rightOK && upOK) {
                        j++;
                        i--;
                        moved = false;
                    }else if (!upOK && rightOK){
                        j++;
                        moved = false;
                        goingUp = false;
                    }else{
                        i++;
                        moved =false;
                        goingUp = false;
                        goingRight = false;
                        goingDown = true;
                    } // keep moing up right;
                }else { // just horizontal move
                    // move down left ;
                    if(downOK && leftOK){
                        i++;
                        j--;
                        goingRight = false;
                        goingDown = true;
                        goingLeft = true;
                        moved = false;
                    } else if(!leftOK && downOK){
                        i++;
                        goingRight = false;
                        goingDown = true;
                        moved = true;
                    }else if (rightOK && upOK){
                        i--;
                        j++;
                        // goingRight = true;
                        goingUp = true;
                        moved = false;
                    }
                    else if (rightOK){
                        j++;
                        moved = false;
                    }
                }
            }

            if (goingLeft && moved){
                if (goingDown){
                    if(downOK){
                        if (leftOK){ // ok keep moving
                            i++;
                            j--;
                            moved = false;
                        }else { // left boundery
                            goingLeft = false;
                            i++;
                            moved = false;
                        }
                    }else{
                        if (leftOK && !downOK){ // move right
                            goingDown = false;
                            goingLeft = false;
                            goingRight = true;
                            j++;
                            moved = false;

                        }
                        if(!leftOK && !downOK){ // right
                            goingLeft = false;
                            goingDown = false;
                            goingRight = true;
                            j++;
                            moved = false;
                        }
                    }
                }
            }

            if (goingDown && moved &&  !goingLeft){
                // going down only
                // then go to up right
                if (rightOK){ // go right up
                    i--;
                    j++;
                    goingDown = false;
                    goingUp = true;
                    goingRight = true;
                    moved = false;
                }else if (leftOK){  // gp left down
                    i++;
                    j--;
                    goingLeft = true;
                    moved = false;
                } else if (downOK){
                    i++;
                    moved = false;
                }

            }

            if (!moved){
                result.push_back(matrix[i][j]);
                // cout << matrix[i][j] << endl;
                // cout << "some error i -> " << i << " j-> " << j << endl;
            }else{
                // cout << "some error i -> " << i << " j-> " << j << endl;
                // cout << "up down right left ok?>" << upOK << downOK << leftOK << rightOK << endl;
                break;
            }
        }
        return result;
    }
};
int main(){
    Solution s;
    vector< vector<int> > nums1 = {};
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
    s.findDiagonalOrder(nums1);


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
