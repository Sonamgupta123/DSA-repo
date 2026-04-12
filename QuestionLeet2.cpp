#include<iostream>
#include<vector>
#include<climits>
#include<deque>
#include <unordered_map>
using namespace std;
int dist(int a, int b) {
        if (a == 26) return 0; // finger not used yet
        return abs(a / 6 - b / 6) + abs(a % 6 - b % 6);
    }
   
int main(){
 
    return 0;
}