#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {20, 10, 40, 60, 30};
    int t = 50;

    sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == t) {
            cout << "Pair found: (" << nums[left] << ", " << nums[right] << ")" << endl;
            left++;
            right--;
        } else if (sum < t) {
            left++;
        } else {
            right--;
        }
    }

    return 0;
}
