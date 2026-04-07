#include<iostream>
#include<vector>

using namespace std;
  

int main() {
   vector<int> commands = {4,-1,4,-2,4};
  vector< vector<int>> obstacles = {{2,4}};
  int ans = robotSim(commands,obstacles);
  cout<<ans<<endl;

    return 0;
}
