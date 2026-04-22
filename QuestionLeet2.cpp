#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;

 vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> result;
        
        for (auto &q : queries) {
            for (auto &d : dictionary) {
                int diff = 0;
                
                for (int i = 0; i < q.size(); i++) {
                    if (q[i] != d[i]) {
                        diff++;
                    }
                    
                    if (diff > 2) break; // early stop
                }
                
                if (diff <= 2) {
                    result.push_back(q);
                    break; // no need to check further dictionary words
                }
            }
        }
        
        return result;
    }
   
  
  
int main(){
 vector<string> queries = {"yes"};
 vector<string> dictionary ={"not"};
 vector<string> ans = twoEditWords(queries,dictionary);
 for(int val : ans){
    cout<<val<<endl;
 }
  return 0;
 }
   
