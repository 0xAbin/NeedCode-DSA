//
// Created by 0xabin on 13/11/24.
//


#include "iostream"
#include "string"

int main () {

    std::string str[] = {"bob","tits","vegan"};

    for (auto it = std::begin(str); it != std::end(str); ++it) {
        const std::string& s = *it;
        std::cout << s << std::endl;
    }


    return 0;
}