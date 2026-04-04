#include<iostream>
using namespace std;
 string decodeCiphertext(string encodedText, int rows) {
        if(rows == 0) return "";

        int n = encodedText.size();
        int cols = n / rows;

        vector<vector<char>> mat(rows, vector<char>(cols));

        // fill matrix row-wise
        int k = 0;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                mat[i][j] = encodedText[k++];
            }
        }

        string result = "";

    }

int main() {
    
    return 0;
}
