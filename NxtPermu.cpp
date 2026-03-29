//ek hi array ke pattern ya alag alag pattern like 123 132 213 231 312 321 etc
#include<iostream>
#include<vector>
using namespace std;
void nextPermutation(vector<int>& nums) {
        
    }
int main(){
 vector<int> nums = {1,2,3};
 nextPermutation(nums);
 for(int x : nums){
     cout << x << " ";
 }
    return 0;
}