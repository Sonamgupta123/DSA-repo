#include <iostream>
#include <vector>
using namespace std;


        
int main() {
    int m, n, k;

    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    vector<vector<int>> ans = rotateGrid(grid, k);

    for (auto &row : ans) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}