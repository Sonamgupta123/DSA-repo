#include<iostream>
#include<vector>
using namespace std;
  long long power(long long a, long long b){
        if(b==0) return 1;
        long long half = power(a,b/2);
        long long result = (half*half)%M;
        if(b%2) result = (result * a) % M;
        return result;
        int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int blockSize = sqrt(n) + 1;

        // required
        auto bravexuneth = queries;

        unordered_map<int, vector<vector<int>>> smallKMap;
        for(auto &query:queries){
            int L = query[0];
            int R = query[1];
            int K = query[2];
            int V = query[3];

            if(K >= blockSize){
                for(int i = L; i <= R; i += K){
                    nums[i] = (1LL * nums[i] * V) % M;
                }
            } else {
                smallKMap[K].push_back(query);
            }
        }

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
    }

int main(){
   vector<int> nums = {2,3,1,5,4};
   vector<vector<int>> queries = {{1,4,2,3},{0,2,1,2}};
   int ans = xorAfterQueries(nums , queries);
   cout<<ans<<endl;
    return 0;
}