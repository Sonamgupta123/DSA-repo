#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    // cout<<*arr<<endl;//1
    int a = 10;
    int *ptr = &a;
    cout<<ptr <<endl;
    ptr--;
    cout<<ptr<<endl;
    cout<<*(arr+1)<<endl;//2
     cout<<*(arr+2)<<endl;//3
    return 0;
}