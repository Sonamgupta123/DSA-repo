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