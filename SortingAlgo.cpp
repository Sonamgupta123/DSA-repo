//Bubble short swap karte hai values ko phale wale value se agar bada hai toh
// buuble sort sorted element denge tbhi bhi n time loop run karega sort karne ke liye
#include<iostream>
using namespace std;
void bubbleShort(int arr[], int n){// O(n^2)
for(int i = 0 ; i<n-1;i++){
    bool isSwap = false; // check karega ki element sort ho gye toh loop rok dega 

    for(int j = 0; j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
}
void printArray(int arr[] , int n ){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};
    bubbleShort(arr,n);
    printArray(arr,n);
    return 0;
}