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
              if (mp[val].size() == 3) {
                int dist = 2 * (mp[val].back() - mp[val].front());
                ans = min(ans, dist);
            }
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
int main(){
 vector<int> nums = {1,2,1,1,3};
 int ans = minimumDistance(nums);
 cout<<ans<<endl;
    return 0;
}