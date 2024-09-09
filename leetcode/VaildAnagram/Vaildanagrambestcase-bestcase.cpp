#include "iostream"
#include "unordered_map"
using namespace std;

bool check(string ann, string noa) {
    if ( ann.length() != noa.length()) {
        return false;
    }
    unordered_map<char , int > countall;
    for (char c : ann) {
        countall[c]++;
    }

    for (char s : noa) {
        countall[s]--;
        if (countall[s] < 0) {
             return false;
        }

    }
    return true;




}



int main () {

    string ann = "abin";
    string noa = "niba";

 if(check(ann ,noa)){
     cout << "yes anam";
 } else {
     cout << "not anam";
 }

 return 0;



}

