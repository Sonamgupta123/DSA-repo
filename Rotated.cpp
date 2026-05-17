#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        // Minimum is in left part including mid
        if (nums[mid] < nums[high]) {
            high = mid;
        }
        // Minimum is in right part
        else if (nums[mid] > nums[high]) {
            low = mid + 1;
        }
        // Duplicates present
        else {
            high--;
        }
    }

    return nums[low];
}

int main() {

    vector<int> nums = {2, 2, 2, 0, 1};

    cout << "Minimum element: " << findMin(nums);

    return 0;
}