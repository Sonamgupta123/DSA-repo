#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;

        
       
   
int main(){
 vector<int> robot = {1,-1};
 vector<vector<int>> factory = {{-2,1},{2,1}};
 long long ans = minimumTotalDistance(robot,factory);
 cout<<ans<<endl;
    return 0;
}