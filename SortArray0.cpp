#include<iostream>
#include<vector>

using namespace std;
void sortColors(vector<int>& nums) {
        // sort using bruteforce apporoch
        sort(nums.begin(),nums.end());
    }
int main(){
    vector<int> nums = {0,1,2,1,2,1,0,0,2};
    cout<<sortColors(nums)<<endl;
    return 0;
}