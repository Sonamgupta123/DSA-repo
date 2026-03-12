#include<iostream>
using namespace std;
int printHello(){
    cout<<"hello\n";
    return 3;
}
int sum(int a, int b){
  int s = a+b;
  return s;
}

int minNum(int a , int b){
    if(a<b){
        
        return a;
    }else{
        
        return b;
    }
    
}
int main(){
    cout<<sum(10,5)<<endl;
    cout<< printHello() <<endl;
    cout<<"min is"<< minNum(10,80)<<endl;
    return 0;
}