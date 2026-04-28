#include<iostream>
#include<queue>
#include<vector>
using namespace std;
 

int main(){
   vector<vector<int>> grid = {{1,1,2}};
   bool ans = hasValidPath(grid);
   cout<<ans<<endl;

    return 0;
}