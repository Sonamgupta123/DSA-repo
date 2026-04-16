#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
  vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        
        // Step 1: value -> indices mapping
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        vector<int> ans;
        
        // Step 2: process each query
        for (int q : queries) {
            int val = nums[q];
            auto &pos = mp[val];
            
            // If only one occurrence
            if (pos.size() == 1) {
                ans.push_back(-1);
                continue;
            }
       
   
int main(){
 
 
    return 0;
}