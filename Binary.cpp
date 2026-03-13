//It is coversion between decimal to binary or binary to decimal etc..
#include<iostream>
using namespace std;
int decToBinary(int decNum){
   int ans=0, pow = 1;

   while(decNum>0){
    int rem = decNum%2 ;
    decNum /= 2; //update the num 
    ans += (rem * pow);
    pow *= 10;
   }
   return ans;// binary form
}
int BinToDec(int BinNum){
 int ans1 = 0 , pow = 1;

 while(BinNum>0){
    int rem = BinNum%2;
    ans1 +=(rem*pow);
    BinNum /=2;
    pow += 2;
 }
 return ans1;
}
int main(){
    int decNum=50 ;
    for(int i=1 ; i<=10 ;i++){
  cout<<"decimal to binary "<<decToBinary(i)<<endl;

    }
    for(int i = 0 ; i<=10 ;i++){
        cout<<"Binary to decimal "<<BinToDec(i)<<endl;
    }
}