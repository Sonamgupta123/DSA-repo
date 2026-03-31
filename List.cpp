#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
    list<int> l;
    deque<int> d ={1,2,3};// random access possible like cout<<d[2]
    // d.push_back(1);
    l.push_back(1);
     l.push_back(2);
      l.push_back(3);
      l.push_front(4);
      l.pop_back();
      l.pop_front();
       for(int val : l){
        cout<<val<<" ";
       }
       cout<<endl;
       return 0;
}