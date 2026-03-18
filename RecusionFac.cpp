// code for recurssion program in cpp
#include<iostream>
using namespace std;
int fact(int n){
   // base condition
 if(n>=1){
   // recursive case
    return n*fact(n-1);
   } else{
    return 1;
   } 
 
}
int main(){
int n;
cout<<"num of which factorial you want"<<endl;
cin>>n;
// calling recursive function
cout<<"factorial of "<<n<< " is "<<fact(n);
}