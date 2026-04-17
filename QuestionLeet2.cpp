#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
 
        
       
       
   
int main(){
 vector<int> nums = {1,2,3,4};
 vector<int> queries = {0,1,2,3};
 vector<int> ans = solveQueries(nums , queries);
 for( int x : ans){
    cout<<x<<endl;
 }
    return 0;
}