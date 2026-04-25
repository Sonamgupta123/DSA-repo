#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;

 
int main(){
    vector<int> nums =  {0,5,3};
 vector<long long> ans = distance(nums);
 for(long long val : ans){
    cout<<val<<endl;
 }
  return 0;
 }
   
