#include<iostream>
#include<vector>
using namespace std;
  int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        set<pair<int,int>> obs;
        for(auto &o : obstacles){
            obs.insert({o[0], o[1]});
        }
         vector<pair<int,int>> dir = {
            {0,1}, {1,0}, {0,-1}, {-1,0}
        };
        int x = 0, y = 0;
        int d = 0; // start facing North
        int maxDist = 0;

int main() {
  
    return 0;
}
