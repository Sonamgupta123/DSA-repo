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
int main(){
    cout<<"factorial is "<<fact(4)<<endl;
    cout<<"sum is "<<sum(10)<<endl;
    return 0;
}