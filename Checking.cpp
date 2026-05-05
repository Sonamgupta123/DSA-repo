#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    
    rotate(matrix);  // just call it

    // Print rotated matrix
    for(auto row : matrix){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}