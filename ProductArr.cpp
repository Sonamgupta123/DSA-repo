#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);
        for(int i =0 ; i<n;i++){
            int product = 1;
            for(j=0; j<n;j++){
                if(i!=j){
               ans *= nums[j];
                }
            }
        }
        return ans;
    }
int main(){
    vector<int> nums = {1,2,3,4}
    cout<<productExceptSelf(nums)<<endl;
    return 0;
}