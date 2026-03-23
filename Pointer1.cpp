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
    return 0;
}