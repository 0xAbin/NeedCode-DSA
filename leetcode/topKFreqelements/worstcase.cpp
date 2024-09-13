//
// Created by 0xabin on 18/05/24.
//


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace  std;



int main () {
    vector<int> k = {};
    vector <int> nums = {1,1,1,2,2,3,3,3,3,4};
    unordered_map<int, int > count;

    std::cout << "nums:" " " "[";
    for (int i = 0 ; i < nums.size() ; i++){
            cout << nums[i];
                if (i < nums.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

//    for (int arr : nums) {
//        cout << nums[]
//    }

    for (int n : nums) {
        count[n] = 1 + count[n];
    }

    cout << "In map" << endl ;

    for (const auto& pair : count) {
        cout << pair.first << ": " << pair.second << endl;
    }

    for(const auto&pair : count) {
        if (pair.second > 1){
            k.push_back(pair.first);
        }
    }

    std::cout << "Output:" " " "[";
    for (int i = 0; i < k.size(); i++ ){
        std::cout << k[i];
        if (i < k.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
    return 0;
}
