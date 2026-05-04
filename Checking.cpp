 #include<iostream>
 #include<vector>
 #include <queue>
 #include<algorithm>
 using namespace std;
   void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

              
    int main(){
       
      return 0;
    }