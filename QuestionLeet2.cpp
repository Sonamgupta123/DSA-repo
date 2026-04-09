#include<iostream>
#include<vector>
using namespace std;
  long long power(long long a, long long b){
        if(b==0) return 1;
        long long half = power(a,b/2);
        long long result = (half*half)%M;
        if(b%2) result = (result * a) % M;
        return result;
    }
int main(){
   vector<int> nums = {2,3,1,5,4};
   vector<vector<int>> queries = {{1,4,2,3},{0,2,1,2}};
   int ans = xorAfterQueries(nums , queries);
   cout<<ans<<endl;
    return 0;
}