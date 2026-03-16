#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3};
    cout<<"size =" <<vec.size()<<endl;
    vec.push_back(4);
    cout<<"size after back =" <<vec.size()<<endl;

  vec.pop_back();
  cout<<vec.front()<<endl;
  cout<<vec.back()<<endl;
    for(int val :vec){
        cout<<val<<endl;

    }
    return 0;
}

