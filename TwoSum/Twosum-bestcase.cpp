
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int main () {
    vector <int> nums = {20,10,40,60 , 30};
    int t = 50;
     unordered_map <int ,int> num_count;
//    int n = nums.size();
//    int s = n - 1;
   for (int i = 0; i < nums.size(); i++) {
       int num = nums[i];
       int check = t - num;

       if(num_count.find(check) != num_count.end()){
           cout << "Found :(" << check << "," << num << ")" << endl;
       }
       num_count[num]++;
   }
   return 0;

}


//check