#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;


   
  
  
int main(){
 vector<int> source = {1,2,3,4};
 vector<int> target = {1,3,2,4};
 vector<vector<int>> allowedSwaps = {};
 int ans = minimumHammingDistance(source,target,allowedSwaps);
 cout<<ans<<endl; 
  return 0;
 }
   
