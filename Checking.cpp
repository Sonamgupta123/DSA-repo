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
         long maxVal = F;
        
        // Step 2: compute F(k)
        for (int k = 1; k < n; k++) {
            F = F + sum - (long)n * nums[n - k];
            maxVal = max(maxVal, F);
        }
        
        return maxVal;
    }
    int main(){
        vector<int> nums = {4,3,2,6};
        int ans =  maxRotateFunction(nums);
        cout<<ans<<endl;
        return 0;
    }