#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i = 1 ;i<=n;i++){
     fact = fact*i;    
    }
    return fact;
}
int sum(int n){
    int sum = 0;
    for(int i = 1 ;i<=n;i++){
        sum = sum +i;
    }
   return sum ;
}
int sum1(int a, int b){
    return a+b;
}
void chnageX(int x){
    x = 2*x;
    cout<<"x = "<<x<<endl;
}
int main(){
    int a = 5 , b = 4 ,x = 5;
    
    sum1(a,b);
    cout<<"factorial is "<<fact(4)<<endl;
    cout<<"sum is "<<sum(10)<<endl;
    cout<<"sum1 is "<<sum1(a,b)<<endl;
    chnageX(x);
    cout<<"x = "<<x<<endl;
    return 0;
}