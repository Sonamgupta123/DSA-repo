#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;

    int ** parptr = &ptr;// pointer to pointer 
    cout<<ptr<<endl;
    cout<< &a <<endl;
    cout<< &ptr<<endl;
    cout<< parptr<<endl;
    cout<< *(&a) <<endl;
     cout<<*(ptr)<<endl;// give value at this address

     int *ptr3 = NULL;
     cout<<ptr3<<endl;
    return 0;
}