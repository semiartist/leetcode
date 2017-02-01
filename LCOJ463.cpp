#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int boundrySize = 0;
        int temp = 0;
        // loop through the vecotr;
        for (size_t row = 0; row < grid.size() ; ++row){
            for (size_t col = 0; col < grid[row].size() ; ++col){
                cout << "row -> " << row << " col -> " << col << '\n';
                temp = 0;
                if (grid[row][col] == 1){
                    temp = 4;
                    // up
                    if (row != 0) if (grid[row-1][col] == 1) temp -= 1;
                    //down
                    if (row != (grid.size()-1)) if(grid[row+1][col] == 1) temp -= 1;
                    // left
                    if (col != 0) if (grid[row][col-1] == 1) temp -= 1;
                    if (col != (grid[row].size()-1) ) if(grid[row][col+1] == 1) temp -=1;
                    cout << "temp -> " << temp << endl;
                }

                boundrySize += temp;
        cout << "boundry size -> " << boundrySize << endl;
            }

        }

        cout << "boundry size -> " << boundrySize << endl;
        return boundrySize;
    }
};



int main(){
    vector< vector<int> > test = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};

    Solution s;
    cout << s.islandPerimeter(test);
}
