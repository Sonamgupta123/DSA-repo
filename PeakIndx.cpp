//peak value in an array jiske phale ka value increasing order and baad ke decreasing order
#include<iostream>
#include<vector>
using namespace std;
 int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1 , end = arr.size()-2; // ye isliye kuki start = 0 and end n-1 kabhi bhi peak value ho hi nhi skta
        while(st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }else if(arr[mid-1]<arr[mid]){
                st = mid+1;
            }else{
                end = mid -1;
            }
        }
        return -1;
    }
int main(){
    vector<int> arr = {0,3,8,9,5,2};
    cout<< peakIndexInMountainArray(arr)<<endl;
    return 0;
}