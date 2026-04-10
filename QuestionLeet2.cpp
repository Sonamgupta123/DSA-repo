#include<iostream>
#include<vector>
using namespace std;
  

        

       
           
        

int main(){
   vector<int> nums = {2,3,1,5,4};
   vector<vector<int>> queries = {{1,4,2,3},{0,2,1,2}};
   int result = xorAfterQueries(nums , queries);
   cout<<result<<endl;
    return 0;
}