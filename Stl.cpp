// we will see pre-defined keywords in this standard template library of cpp
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec ={1,2,3,4};
    // vec.push_back(1) ;
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.emplace_back(5);
    // vec.pop_back();
    cout<<" size "<<vec.size()<<endl;
    cout<<"capacity "<<vec.capacity()<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    //vector<int> vec(3,10);
    //vector<int> vec2(vec1);
    return 0;
}