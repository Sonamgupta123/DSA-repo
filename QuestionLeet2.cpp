#include<iostream>
#include<vector>
#include<climits>
#include<deque>
#include <unordered_map>
using namespace std;
 int getMinDistance(vector<int>& nums, int target, int start) {
        int ans = INT_MAX;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                ans = min(ans, abs(i - start));
            }
        }
        
        return ans;
    }
   
int main(){
 vector<int> nums = {};
 int target = ;
 int start = ;
 int ans =getMinDistance(nums, target,start);
 cout<<ans<<endl;
    return 0;
}