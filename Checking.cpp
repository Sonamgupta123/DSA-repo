#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int minimumEffort(vector<vector<int>>& tasks) {

        sort(tasks.begin(), tasks.end(),
            [](vector<int>& a, vector<int>& b) {
                return (a[1] - a[0]) > (b[1] - b[0]);
            });

        int energy = 0;
        int current = 0;

        for (auto &t : tasks) {

            int actual = t[0];
            int minimum = t[1];

            if (current < minimum) {
                energy += (minimum - current);
                current = minimum;
            }

            current -= actual;
        }

        return energy;
    }


int main() {
   vector<vector<int>> tasks = {{1,2},{2,4},{4,8}};
   int ans = minimumEffort(tasks);
   cout<<ans<<endl;
    return 0;
}