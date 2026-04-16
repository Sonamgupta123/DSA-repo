#include<iostream>
#include<vector>
#include<climits>
#include<functional>
#include<deque>
#include <unordered_map>
using namespace std;
 
       
   
int main(){
 vector<string> words = {"a","b","leetcode"};
 string target = "leetcode";
 int startIndex = 0 ;
 int ans = closestTarget(words, target,startIndex);
 cout<<ans<<endl;
 
    return 0;
}