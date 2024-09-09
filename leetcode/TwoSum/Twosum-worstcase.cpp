#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int t = 13;
    int siz = arr.size();

    bool found = false;


    for (int i =0; i < arr.size(); i++) {
        for (int j  = i + 1; j < arr.size(); j++){
            if ( arr[i] + arr[j] == t ){
                found = true;
                cout << "The Two Number Are" <<  endl << arr[i] <<  endl << "And" << endl << arr[j] ;
                break;
            }

        }
        if(found) {
            break;
        }
    }


}
