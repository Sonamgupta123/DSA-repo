#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortColors(vector<int>& nums) {
        // sort using bruteforce apporoch
        sort(nums.begin(),nums.end());
    }
    void sortColors1(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0 , count1 = 0 , count2 = 0;
        for(int i = 0 ; i<=n; i++){
            if(nums[i] == 0) count0++;
            else if (nums[i] == 1) count1++;
            else count2++;
        }
        
        int idx = 0;
        for(int i = 0 ; i<count0; i++){
            nums[idx++] = 0;
        }
        for(int i = 0 ; i<count1; i++){
            nums[idx++] = 1;
        }
        for(int i = 0 ; i<count2; i++){
            nums[idx++] = 2;
        }
    }
     void sortColors2(vector<int>& nums) {
        int n = nums.size();
        int low = 0 ,mid = 0 , high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low] , nums[mid]);
                mid++;
                low++;
            }else if (nums[mid] == 1){
                mid++;
            }else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
int main(){
    vector<int> nums = {0,1,2,1,2,1,0,0,2};
  //sortColors(nums);
   //sortColors1(nums);
    sortColors2(nums);
  for(int x :nums){
    cout<<x<<" ";
  }
    return 0;
}