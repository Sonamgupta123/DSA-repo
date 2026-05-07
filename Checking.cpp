#include <iostream>
#include <vector>
using namespace std;



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