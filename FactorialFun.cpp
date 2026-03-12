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
int main(){
    int x = 5 , y = 4;
    sum1(x,y);
    cout<<"factorial is "<<fact(4)<<endl;
    cout<<"sum is "<<sum(10)<<endl;
    cout<<"sum1 is "<<sum1(x,y)<<endl;
    return 0;
}