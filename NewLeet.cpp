#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;


        // mapping
        for (auto &p : points) {
            long long x = p[0], y = p[1];
            if (y == 0) pos.push_back(x);
            else if (x == side) pos.push_back(side + y);
            else if (y == side) pos.push_back(3LL * side - x);
            else pos.push_back(4LL * side - y);
        }

        sort(pos.begin(), pos.end());

        long long low = 0, high = per, ans = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;

            if (canPlace(pos, k, mid, per)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
int main(){
int side = 2 ;
vector<vector<int>> points = {{0,0},{0,1},{0,2},{1,2},{2,0},{2,2},{2,1}};
int k = 5;
int ans = maxDistance(side,points,k);
cout<<ans<<endl;
  return 0;
 }
   
