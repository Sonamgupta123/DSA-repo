 #include<iostream>
 #include<vector>
 #include <queue>
 #include<algorithm>
 using namespace std;
 
    int main(){
        vector<vector<int>> grid = {{0,1},{2,0}};
        int k = 1 ;
        int ans = maxPathScore(grid , k);
        cout<<ans<<endl;
        return 0;
    }