#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
  class Robot {
private:
    int w, h;
    int x, y;
    int dir; // 0=East, 1=North, 2=West, 3=South
    int cycle;
public:
    Robot(int width, int height) {
        w = width;
        h = height;
        x = 0;
        y = 0;
        dir = 0; // East
        cycle = 2 * (w + h) - 4;
    }
int main() {
   

    return 0;
}
