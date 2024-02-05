//
// Created by ABIN VINOD on 04/02/24.
//

#include <iostream>
#include <vector>
#include<unordered_map>
#include <algorithm>
using namespace  std;

int  main () {

    string strs[6] = { "eat","tea","tan","ate","nat","bat"};
    unordered_map<string, vector<string>> map;

       for (string& s : strs) {
           string key  = s ;
           sort(key.begin(), key.end());
           map[key].push_back(s);
       }

       for (auto& pair : map) {
           for (string& s : pair.second) {
               cout << s << " ";
           }
           cout << endl ;
       }

       return 0;

}

