#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
  
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