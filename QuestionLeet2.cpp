#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
 int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int ans = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) {
                ans = max(ans, j - i);
                j++;  // try to increase distance
            } else {
                i++;  // move i to satisfy condition
            }
        }

        return ans;
    }
  
int main(){
 vector<int> nums1 = {30,29,19,5};
 vector<int> nums2 = {25,25,25,25,25};
 int ans = maxDistance(nums1 , nums2);
 cout<<ans<<endl;
  return 0;
 }
   
