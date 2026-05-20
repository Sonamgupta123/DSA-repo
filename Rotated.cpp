#include <iostream>
#include <vector>

using namespace std;


int main() {

    int n, m;

    cin >> n;

    vector<int> nums1(n);

    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    cin >> m;

    vector<int> nums2(m);

    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    cout << getCommon(nums1, nums2);

    return 0;
}