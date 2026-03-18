#include<iostream>
using namespace std;
int main(){
    int n , cnt=0;
    cout<<"enter num "<<endl;
   cin>>n;
   for(int i = 2 ; i<n ;i++){
    if(n%i == 0){
     cnt++;
    }
   }

   if(cnt==0){
    cout<<n<<"is prime "<<endl;
   }else{
    cout<<n<<"non prime"<<endl;
   }
   return 0;
}

// fibnocci recursion

// code for printing fibnocci series using recursion
#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
int n;
cout<<"enter the term at which series you want"<<endl;
cin>>n;
for(int i=0; i<=n; i++){
    cout<<" " <<fib(i);
}
return 0;
}