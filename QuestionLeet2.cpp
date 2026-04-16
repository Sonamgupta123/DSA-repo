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
            // Binary search to find position of q
            int idx = lower_bound(pos.begin(), pos.end(), q) - pos.begin();
            
            // Previous and next (circular)
            int prev = (idx > 0) ? pos[idx - 1] : pos.back();
            int next = (idx < pos.size() - 1) ? pos[idx + 1] : pos[0];
            
            // Circular distance function
            auto dist = [&](int a, int b) {
                int d = abs(a - b);
                return min(d, n - d);
            };
            
            int d1 = dist(q, prev);
            int d2 = dist(q, next);
            
            ans.push_back(min(d1, d2));
        }
        
        return ans;
    }
       
   
int main(){
 
 
    return 0;
}