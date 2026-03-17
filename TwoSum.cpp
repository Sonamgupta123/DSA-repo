#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> twosum(vector<int> nums,int target){
    for(int i=0; i<nums.size();i++){
        for(int j= i+1 ; j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}
int main(){
    vector<int> vec = {2,7,11,15};
    int target = 9;
    vector<int> ans = twosum(vec,target);
    for(int i=0 ;i<ans.size();i++){
        cout<<ans[i]<<" "<<endl;
    }
    
    return 0;
}
