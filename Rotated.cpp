#include<iostream>
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
            // Duplicates: cannot decide, shrink search space
            else {
                high--;
            }
        }

        return nums[low];
    }
int main(){
    return 0;
}