#include <iostream>
#include <vector>
using namespace std;

vector<int> separateDigits(vector<int>& nums) {
    vector<int> ans;

    for (int num : nums) {
        string s = to_string(num);

        for (char ch : s) {
            ans.push_back(ch - '0');
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {13, 25, 83, 77};

    vector<int> ans = separateDigits(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}