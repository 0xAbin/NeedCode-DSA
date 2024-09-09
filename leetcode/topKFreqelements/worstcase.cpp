//
// Created by 0xabin on 18/05/24.
//


#include <iostream>
#include <vector>

using namespace  std;

int main () {
    vector<int> k = {};
    vector <int> nums = {1,1,1,2,2,3};

    k.push_back(1);
    k.push_back(2);








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
