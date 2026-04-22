#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;


   
   int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int n = source.size();
        parent.resize(n);

        for (int i = 0; i < n; i++)
            parent[i] = i;

        // Step 1: Union
        for (auto &e : allowedSwaps)
            unite(e[0], e[1]);
          // Step 2: Group indices
        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < n; i++) {
            groups[find(i)].push_back(i);
        }

        int ans = 0;

        // Step 3: Process each group
        for (auto &g : groups) {
            unordered_map<int, int> freq;

            // Count source values
            for (int idx : g.second)
                freq[source[idx]]++;
             // Match target values
            for (int idx : g.second) {
                if (freq[target[idx]] > 0) {
                    freq[target[idx]]--;
                } else {
                    ans++; // mismatch
                }
            }
        }

        return ans;
    }
  
int main(){
 vector<int> source = {1,2,3,4};
 vector<int> target = {1,3,2,4};
 vector<vector<int>> allowedSwaps = {};
 int ans = minimumHammingDistance(source,target,allowedSwaps);
 cout<<ans<<endl; 
  return 0;
 }
   
