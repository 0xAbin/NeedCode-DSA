//
// Created by 0xabin on 13/11/24.
//


#include "iostream"
#include "string"
#include "vector"

//function to encode
std::string encode(const std::vector<std::string> &strs) {
    std::string encoded;
    for (const auto &str : strs) {
        encoded += std::to_string(str.size()) + "#" + str;
    }
    std::cout<< encoded;
    return encoded;
}


//function to decode
//std::vector<std::string> decode(const std::string &str ) {
//
//}

int main () {
    // C style has issue later
    std::vector<std::string> strs = {"bob", "tits", "vegan"};
    std::cout << " [";
    for (const auto &s : strs) {
        std::cout << " " << s << " ";
    }
    std::cout << "]" << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "encoding the string" << std::endl;

    std::cout << "encoding the string" << std::endl;

    std::string encoded = encode(strs);
    std::cout << encoded << std::endl;



    return 0;
}