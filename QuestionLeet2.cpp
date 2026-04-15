#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
 int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;
         for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                int diff = abs(i - startIndex);
                int dist = min(diff, n - diff); // circular distance
                ans = min(ans, dist);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
       
   
int main(){
 
    return 0;
}