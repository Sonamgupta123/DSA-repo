#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
 
  
int main(){
 vector<int> nums1 = {30,29,19,5};
 vector<int> nums2 = {25,25,25,25,25};
 int ans = maxDistance(nums1 , nums2);
 cout<<ans<<endl;
  return 0;
 }
   
