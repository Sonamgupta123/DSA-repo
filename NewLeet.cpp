#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;


       
    
int main(){
int side = 2 ;
vector<vector<int>> points = {{0,0},{0,1},{0,2},{1,2},{2,0},{2,2},{2,1}};
int k = 5;
int ans = maxDistance(side,points,k);
cout<<ans<<endl;
  return 0;
 }
   
