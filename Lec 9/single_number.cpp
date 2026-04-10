#include<iostream>
#include<vector>
using namespace std;

// n XOR n == 0;
// n XOR 0 == n;

int single_number(vector<int>& nums){
    int single = 0;
    for(int val : nums){
        single = single ^ val;
    }

    return single;
}

int main(){
    vector<int> given_nums = {1, 2, 1, 4, 11, 2, 11};
    cout << single_number(given_nums);
}