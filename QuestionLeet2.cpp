#include<iostream>
#include<vector>
#include<climits>
#include <unordered_map>
using namespace std;
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, deque<int>> mp;
        int ans = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            mp[val].push_back(i);
            
            // Keep only last 3 indices
            if (mp[val].size() > 3) {
                mp[val].pop_front();
            }
int main(){
 
    return 0;
}