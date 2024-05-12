#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;



int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    map<string, vector<string>>mp;

    for (int i = 0; i < strs.size(); i++) {
         string s = strs[i];
         sort(s.begin(), s.end());
        mp[s].push_back(strs[i]);
        cout << s[i];
    }

    vector<vector <string>> ans(mp.size());
    int index = 0;
    for (auto x:mp) {

    }

}
