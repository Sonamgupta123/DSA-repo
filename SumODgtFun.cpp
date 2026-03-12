//calcate the sum of digit
#include<iostream>
using namespace std;
int SumODgt(int num){
    int digitSum=0;
    while(num>0){
        int lastDgt = num%10;
        num = num/10;
        digitSum= digitSum+lastDgt;
    }
    return digitSum;
}
int fact(int n){
    int fact=1;
    for(int i = 1 ;i<=n;i++){
     fact = fact*i;    
    }
    return fact;
}
int Combination(int n , int r){
    int fact_n = fact(n);
    int fact_r= fact(r);
    int factnmr = fact(n-r);
    return fact_n/(fact_r*factnmr);
}
int main(){
    int n= 8 , r = 2;
   cout<< Combination(n,r)<<endl;
    cout<<"sum of digit is "<<SumODgt(145)<<endl;
    return 0;
}