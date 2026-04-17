#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
 
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp; // number -> latest index
        int ans = INT_MAX;

        for (int j = 0; j < nums.size(); j++) {
            int x = nums[j];     
       // reverse current number
            int rev = 0, temp = x;
            while (temp > 0) {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }

       
   
int main(){

  return 0;
 }
   
