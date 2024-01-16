#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 6,7,8,9,12,4,2,3,4,5,6,7,8,10};
    unordered_set<int> uniqueKeys;
    bool duplicateFound = false;

    for (const int &num : nums) {
        if (!uniqueKeys.insert(num).second) {
            cout << "Duplicate found: " << num << endl;
            duplicateFound = true;
        }
    }

    if (!duplicateFound) {
        cout << "No duplicates found" << endl;
    }
}
