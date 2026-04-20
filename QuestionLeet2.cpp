#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
  int maxDistance(vector<int>& colors) {
        int n = colors.size();

        for (int i = n - 1; i >= 0; i--) {
            if (colors[i] != colors[0]) {
                return i; // max distance from left
            }
        }

        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[n - 1]) {
                return (n - 1 - i); // max distance from right
            }
        }

        return 0; 
    }
  
int main(){
 vector<int> colors = {0,1};
 int ans = maxDistance(colors);
 cout<<ans<<endl;
  return 0;
 }
   
