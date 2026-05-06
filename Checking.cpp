#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
    int m = boxGrid.size();
    int n = boxGrid[0].size();

    // Step 1: Apply gravity (right side)
    for (int i = 0; i < m; i++) {
        int empty = n - 1;
        
        for (int j = n - 1; j >= 0; j--) {
            if (boxGrid[i][j] == '*') {
                empty = j - 1;
            } 
            else if (boxGrid[i][j] == '#') {
                swap(boxGrid[i][j], boxGrid[i][empty]);
                empty--;
            }
        }
    }

    // Step 2: Rotate matrix
    vector<vector<char>> result(n, vector<char>(m));
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][m - 1 - i] = boxGrid[i][j];
        }
    }

    return result;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> boxGrid(m, vector<char>(n));

    // Input
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> boxGrid[i][j];
        }
    }

    vector<vector<char>> result = rotateTheBox(boxGrid);

    // Output
    for (auto &row : result) {
        for (auto &cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}