// we will see pre-defined keywords in this standard template library of cpp
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(1) ;
    vec.push_back(2);
    vec.push_back(3);
    cout<<" size "<<vec.size()<<endl;
    cout<<"capacity "<<vec.capacity()<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}