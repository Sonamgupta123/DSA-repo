#include<iostream>
#include<vector>
using namespace std;
  

        

        // small k processing
        for(auto& [K, allQueries] : smallKMap){

            vector<long long> diff(n, 1);

            for(auto& query : allQueries){
                int L = query[0];
                int R = query[1];
                int V = query[3];

                diff[L] = (diff[L] * V) % M;

                int steps = (R - L) / K;
                int next = L + (steps + 1) * K;

                if(next < n){
                    diff[next] = (diff[next] * power(V, M-2)) % M;
                }
            }
             // prefix over step K
            for(int i = 0; i < n; i++){
                if(i - K >= 0){
                    diff[i] = (diff[i] * diff[i - K]) % M;
                }
            }

            // apply
            for(int i = 0; i < n; i++){
                nums[i] = (1LL * nums[i] * diff[i]) % M;
            }
        }

        

int main(){
   vector<int> nums = {2,3,1,5,4};
   vector<vector<int>> queries = {{1,4,2,3},{0,2,1,2}};
   int result = xorAfterQueries(nums , queries);
   cout<<result<<endl;
    return 0;
}