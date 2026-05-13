#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        
        // Difference array
        vector<int> diff(2 * limit + 2, 0);

        for (int i = 0; i < n / 2; i++) {
            int a = nums[i];
            int b = nums[n - 1 - i];

            int low = min(a, b) + 1;
            int high = max(a, b) + limit;
            int sum = a + b;

            // Initially every pair needs 2 moves
            diff[2] += 2;

            // From low to high => can be done in 1 move
            diff[low] -= 1;
            diff[high + 1] += 1;

            // Exact sum => 0 moves
            diff[sum] -= 1;
            diff[sum + 1] += 1;
        }

        int ans = INT_MAX;
        int curr = 0;

        for (int s = 2; s <= 2 * limit; s++) {
            curr += diff[s];
            ans = min(ans, curr);
        }

        return ans;
    }
    int main(){
        vector<int> nums = {1,2,4,3};
        int limit = 4 ;
        int ans = minMoves(nums,limit);
        cout<<ans<<endl;
        return 0;
    }