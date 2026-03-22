#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans;
        for(int i =0 ; i<nums.size();i++){
            int product = 1;
            for(j=0; j<nums.size();j++){
                if(i!=j){
               product *= nums[j];
                }
               ans[i] = product;
            }
        }
    }
int main(){
    return 0;
}