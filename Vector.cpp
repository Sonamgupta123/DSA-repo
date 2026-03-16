#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> vec ={1,2,3};
cout<<vec[0]<<endl;
for(int i: vec){ // for each loop
    cout<<i<<endl;
}
return 0;
}