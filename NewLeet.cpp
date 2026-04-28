#include<iostream>
#include<queue>
#include<vector>
using namespace std;
  int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;
        
        // Step 1: Flatten grid
        for (auto &row : grid) {
            for (int val : row) {
                nums.push_back(val);
            }
        }
        
        // Step 2: Check feasibility
        int rem = nums[0] % x;
        for (int num : nums) {
            if (num % x != rem) return -1;
        }
          // Step 3: Sort
        sort(nums.begin(), nums.end());
        
        // Step 4: Choose median
        int median = nums[nums.size() / 2];
        
        // Step 5: Count operations
        int operations = 0;
        for (int num : nums) {
            operations += abs(num - median) / x;
        }
        
        return operations;
    }

int main(){
  vector<vector<int>> grid = {{1,5},{2,3}};
  int x = 1 ;
  int ans = minOperations(grid,x);
  cout<<ans<<endl;


    return 0;
}