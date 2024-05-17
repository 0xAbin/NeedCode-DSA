#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;



int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

     map<string, vector<string>> anagramGroups;


     for (const string& str : strs){
         string SortedStr = str;
         sort(SortedStr.begin(),SortedStr.end());
//         cout << SortedStr;
          anagramGroups[SortedStr].push_back(str);
     }



     for (const auto& group : anagramGroups){
         cout << "anam" << ":" ;
         for (const string& words : group.second){
             cout << words << " ";
         }
         cout << endl;

     }





}
