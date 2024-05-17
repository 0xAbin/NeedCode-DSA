//
// Created by ABIN VINOD on 15/05/24.
//

#include <iostream>
using namespace  std;






int main () {

    int data;
    int add = 1 ;
    int add2;

    int arr[] = {1,2,3,4,5};

    int s = sizeof(arr) / sizeof(arr[0]);

//    data = arr[0] * arr[1] * arr[2] * arr[3] * arr[4] ;

    for ( int i =0; i < s; i++){
        add = add * arr[i];
    }

    cout << add ;



}