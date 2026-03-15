// //smallest and largest in array
// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
// int nums[] ={5,15,-2,4,6,7};
// int size = 6;
// int smallest = INT_MAX;
// int largest = INT_MIN;
// int indx,indx1;
// for(int i = 0 ;i<size ;i++){
//     if(nums[i]<smallest){
//         smallest=nums[i];
//         indx=i;
//     }
// }
// for(int i=0 ;i<size ;i++){
//     if(nums[i]>largest){
//         largest=nums[i];
//         indx1=i;
//     }
// }
// cout<<"smallest value =" <<smallest<<" at index "<<indx<<endl;
// cout<<"largest value = "<<largest<<" at index "<<indx1<<endl;
//     return 0;

// }

// Linear search
// #include<iostream>
// using namespace std;
// int LinearFun(int arr[] , int size,int target){
//     for(int i = 0 ;i<size ;i++){
//         if(arr[i]==target){
//           return i;
//         }
       
//     }
//     return -1;
// }
// int main(){
//     int arr[]={3,4,56,7,8};
//     int sz = 5;
//     int target= 56;
//    cout<<"target at index "<<LinearFun(arr,sz,target)<<endl;
//    return 0;
// }

//reversing an array same array 
#include<iostream>
using namespace std;
void reverseArray(int arr[] ,int sz){
    int start = 0,end= sz-1;
    while(start<end){
   swap(arr[start] , arr[end]);
   start++;
   end--;
    }
}
int main(){
     int arr[]={3,4,56,7,8};
     int sz = 5;
     reverseArray(arr,sz);
     for(int i =0 ;i<sz;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}