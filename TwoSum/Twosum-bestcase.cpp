
#include <iostream>
using namespace std;


int main () {
    int nums[] = {20,10,40,60 , 30};
    int t = 50;
    int siz;
    siz = sizeof(nums)/ sizeof(nums[0]);

    int size = siz - 1;

    cout << size;
}