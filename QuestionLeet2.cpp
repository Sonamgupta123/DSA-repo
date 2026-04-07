#include<iostream>
#include<vector>
using namespace std;
int w, h;
int x = 0, y = 0;
int dir = 0; // 0=East, 1=North, 2=West, 3=South
int cycle;
void step(int num) {
    if (cycle == 0) return;

    num %= cycle;
    if (num == 0) num = cycle;
int main(){
    return 0;
}