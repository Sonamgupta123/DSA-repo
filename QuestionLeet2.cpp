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
  
int main(){
 
  return 0;
 }
   
