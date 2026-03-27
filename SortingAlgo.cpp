//Bubble short swap karte hai values ko phale wale value se agar bada hai toh
#include<iostream>
using namespace std;
void bubbleShort(int arr[], int n){// O(n^2)
for(int i = 0 ; i<n-1;i++){
    for(int j = 0; j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
}
int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};
    return 0;
}