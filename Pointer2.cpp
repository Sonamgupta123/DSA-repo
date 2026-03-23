// pass by refrence usingg pointer
// #include<iostream>
// #include<vector>
// using namespace std;
// void changeA(int* ptr){
//    *ptr = 20;
// }
// int main(){
//     int a = 10;
//  changeA(&a);
//  cout<<"inside main fun "<<a<<endl;
//     return 0;
// }

// pass by refrence using alias

#include<iostream>
#include<vector>
using namespace std;
void changeA(int &b){
   b= 20;
}
int main(){
         int a = 10;
 changeA(a);
 cout<<"inside main fun "<<a<<endl;
return 0;
}
