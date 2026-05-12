#include <iostream>
#include <vector>
using namespace std;



int main() {
    vector<int> nums = {13, 25, 83, 77};

    vector<int> ans = separateDigits(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}