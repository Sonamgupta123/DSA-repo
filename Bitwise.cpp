//Bitwise Operator 

#include<iostream>
using namespace std;
int main(){
int a= 4 , b= 8;
cout<<(a&b)<<endl;//and
cout<<(a|b)<<endl;//or
cout<<(a^b)<<endl;//not
cout<<(a<<b)<<endl;//left shift
cout<<(a>>b)<<endl;//right shift

//scope - area of variables 1) local 2)global

if(3>1){
    int c = 10;// local scope
    cout<<c<<endl;
}

return 0;
}