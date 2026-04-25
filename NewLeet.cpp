#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
bool canPlace(vector<long long>& pos, int k, long long dist, long long per) {
        int n = pos.size();

        vector<long long> ext(2 * n);
        for (int i = 0; i < n; i++) {
            ext[i] = pos[i];
            ext[i + n] = pos[i] + per;
        }

        for (int i = 0; i < n; i++) {
            long long last = ext[i];
            int count = 1;
            int idx = i;

            while (count < k) {
                long long target = last + dist;
                auto it = lower_bound(ext.begin() + idx + 1, ext.begin() + i + n, target);

                if (it == ext.begin() + i + n) break;

                idx = it - ext.begin();
                last = ext[idx];
                count++;
            }
              if (count == k) {
                if (ext[idx] - ext[i] <= per - dist) {
                    return true;
                }
            }
        }
        return false;
    }
 
int main(){
    vector<int> nums =  {0,5,3};
 vector<long long> ans = distance(nums);
 for(long long val : ans){
    cout<<val<<endl;
 }
  return 0;
 }
   
