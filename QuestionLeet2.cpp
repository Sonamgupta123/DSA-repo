#include<iostream>
#include<vector>
using namespace std;


int main(){
      w = 6; 
    h = 3;
    cycle = 2 * (w + h) - 4;

    step(2);
    step(2);

    vector<int> pos = getPos();
    cout << pos[0] << " " << pos[1] << endl; // 4 0
    cout << getDir() << endl; // East
 step(2);
    step(1);
    step(4);

    pos = getPos();
    cout << pos[0] << " " << pos[1] << endl; // 1 2
    cout << getDir() << endl; // West
    return 0;
}