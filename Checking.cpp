 #include<iostream>
 #include<vector>
 #include <queue>
 #include<algorithm>
 using namespace std;
  int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        
        long sum = 0;
        long F = 0;
        
        // Step 1: sum and F(0)
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            F += (long)i * nums[i];
        }
        
    int main(){
        
        return 0;
    }