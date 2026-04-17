#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
 
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp; // number -> latest index
        int ans = INT_MAX;

        for (int j = 0; j < nums.size(); j++) {
            int x = nums[j];     
       // reverse current number
            int rev = 0, temp = x;
            while (temp > 0) {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }

       // check if reverse appeared before
            if (mp.count(rev)) {
                ans = min(ans, j - mp[rev]);
            }

            // store current index
            mp[x] = j;
        }

        return (ans == INT_MAX) ? -1 : ans;
    } 
   
int main(){
 vector<int>  nums = {120 , 21};
 int ans = minMirrorPairDistance(nums);
 cout<<ans;
  return 0;
 }
   
