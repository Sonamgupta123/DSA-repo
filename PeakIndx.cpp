//peak value in an array jiske phale ka value increasing order and baad ke decreasing order
#include<iostream>
#include<vector>
using namespace std;
 int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1 , end = arr.size()-2;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid-1]<arr[mid]>arr[mid+1]){
                return mid;
            }
        }
    }
int main(){
    return 0;
}