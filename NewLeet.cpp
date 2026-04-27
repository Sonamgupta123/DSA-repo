#include<iostream>
#include<vector>
using namespace std;



int main(){
    vector<vector<char>> grid = {
        {'a','b','b'},
        {'b','z','b'},
        {'b','b','a'}
    };

    bool ans = containsCycle(grid);
    
    cout << (ans ? "true" : "false") << endl;

    return 0;
}