#include<iostream>
#include<vector>
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
         // traverse diagonally
        for(int start = 0; start < cols; start++) {
            int i = 0, j = start;
            while(i < rows && j < cols) {
                result += mat[i][j];
                i++;
                j++;
            }
         }
         // remove trailing spaces
         while(!result.empty() && result.back() == ' ')
            result.pop_back();

         return result;
    }

int main() {
     string encodedText = "ch ie pr";
    int rows = 3;
     string ans = decodeCiphertext(encodedText, rows);

    cout << ans;

    return 0;
}
