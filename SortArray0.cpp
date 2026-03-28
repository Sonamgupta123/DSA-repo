#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortColors(vector<int>& nums) {
        // sort using bruteforce apporoch
        sort(nums.begin(),nums.end());
    }
int main(){
    vector<int> nums = {0,1,2,1,2,1,0,0,2};
  sortColors(nums);
  for(int x :nums){
    cout<<x<<" ";
  }
    return 0;
}