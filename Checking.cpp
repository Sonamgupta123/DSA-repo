#include<iostream>
using namespace std;

 vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        // Step 1: Apply gravity (right side)
        for (int i = 0; i < m; i++) {
            int empty = n - 1; // position to place next stone
            
            for (int j = n - 1; j >= 0; j--) {
                if (boxGrid[i][j] == '*') {
                    empty = j - 1; // reset after obstacle
                } 
                else if (boxGrid[i][j] == '#') {
                    swap(boxGrid[i][j], boxGrid[i][empty]);
                    empty--;
                }
            }
        }

int main() {
   
    return 0;
}