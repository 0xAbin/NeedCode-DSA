#include <iostream>
#include <algorithm>
using namespace std;

bool check(string sanm , string tanm) {
    if (sanm.length() != tanm.length()) {
        return false;
    }

    sort(sanm.begin(), sanm.end());
    sort(tanm.begin(), tanm.end());

    for (int i = 0; i < sanm.length(); i++){
        if(sanm[i] != tanm[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    string sanm =  "anagram" ;
    string tanm =  "nagaram" ;

    if(check (sanm , tanm)) {
        cout << "both are same" << endl;
    }else {
        cout << "both are not same" << endl;
    }
    return 0;
}



