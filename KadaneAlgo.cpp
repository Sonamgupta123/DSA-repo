// maximum subarray sum ko find karne ke liye most optimised solution
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
 int maxSubArray(vector<int>& nums) {
        int currSum = 0 ,maxSum = INT_MIN;
        for(int val:nums){
            currSum += val;
            maxSum = max(currSum,maxSum);
            if(currSum<0){
                currSum = 0;
            }
        }
        return maxSum;
    }
int main(){
   vector<int> vec = {3,-2,-1,5,4,7,-8};
        cout<<maxSubArray(vec)<<endl;
    
    return 0;
}