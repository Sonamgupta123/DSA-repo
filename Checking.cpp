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

           // Step 2: Reverse each row
        for(int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }    
    int main(){
       vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
       void ans = rotate(matrix);
       cout<<ans<<endl;
      return 0;
    }