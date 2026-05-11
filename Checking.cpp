#include <iostream>
#include <vector>
using namespace std;


        // fill top row
        for (int j = left; j <= right; j++)
            grid[top][j] = rotated[idx++];

        // fill right column
        for (int i = top + 1; i <= bottom - 1; i++)
            grid[i][right] = rotated[idx++];

        // fill bottom row
        for (int j = right; j >= left; j--)
            grid[bottom][j] = rotated[idx++];

        // fill left column
        for (int i = bottom - 1; i >= top + 1; i--)
            grid[i][left] = rotated[idx++];
    }

    return grid;
}

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