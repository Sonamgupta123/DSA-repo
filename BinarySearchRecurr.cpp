#include<iostream>
#include<vector>
using namespace std;
int recBinSearch(vector<int> arr , int tar , int st , int end){
    if(st<=end){
        int mid = st + (end-st)/2;
        if(tar>arr[mid]){
            return recBinSearch(arr, tar,mid-1,end);
        }else if(tar<arr[end]){
            return recBinSearch(arr,tar,st,mid-1);
        }else {
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int tar1 = 4;
    cout<< recBinSearch(arr1,tar1)<<endl;
    return 0;
}