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
            isSwap = true;
        }
    }
    if(!isSwap){// return sorted element
        return;
    }
}
}
void printArray(int arr[] , int n ){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//selection sort
// smallest element pick kareke sort karte hai

void selectionSort(int arr[] , int n){
 for(int i=0 ; i<n-1 ;i++){
    int smallestIndx = i;
    for(int j = i+1 ; j<n ;j++){
        if(arr[j]<arr[smallestIndx]){
            smallestIndx = j;
        }
    }
    swap(arr[i], arr[smallestIndx]);
 }
}


//insertion sort 
//assume karte hai ki kuch part sorted hai and value le kar usse correct position pr place karte hai
void insertionSort(int arr , int n){
for(int i = 1 ;i<n;i++){
    int curr = arr[i];
    int prev = i-1;
    while(prev>=0 && arr[prev]>curr){
    arr[prev+1] = arr[prev];
    prev--;
    }
    arr[prev+1] = curr; // placing the curr el in its crrect position
}
}

int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};
    bubbleShort(arr,n);
    printArray(arr,n);
    selectionSort(arr,n);
    return 0;
}