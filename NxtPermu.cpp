//ek hi array ke pattern ya alag alag pattern like 123 132 213 231 312 321 etc
#include<iostream>
#include<vector>
using namespace std;
void nextPermutation(vector<int>& A) {
        int pivot = -1 , n= A.size();
        for(int i = n-2 ; i>= 0 ;i--){
            if(A[i]<A[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverse(A.begin(), A.end());
            return;
        }
        for(int i = n-1 ; i>pivot ;i--){
            if(A[i]>A[pivot]){
                swap(A[i],A[pivot]);
                break;
            }
        }
        int i = pivot+1 , j = n-1;
        while(i<=j){
            swap(A[i++],A[j--]);
        }
    }
int main(){
 vector<int> nums = {1,2,3};
 nextPermutation(nums);
 for(int x : nums){
     cout << x << " ";
 }
    return 0;
}