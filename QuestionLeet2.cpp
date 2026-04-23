#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n, 0);
        
        unordered_map<int, vector<int>> mp;
        
        // Step 1: store indices
        for(int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
 
int main(){

  return 0;
 }
   
