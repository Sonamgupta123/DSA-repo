#include<iostream>
#include<vector>
using namespace std;
  int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        set<pair<int,int>> obs;
        for(auto &o : obstacles){
            obs.insert({o[0], o[1]});
        }
        
int main() {
  
    return 0;
}
