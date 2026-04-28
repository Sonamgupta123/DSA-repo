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

int main(){
  

    return 0;
}