#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    string moves = "UDLR";
 bool  ans = judgeCircle(moves);
  if(ans){
    cout<<"true"<<" ";
  }else{
    cout<<"false"<<" ";
  }
    return 0;
}
