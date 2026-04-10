#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> new_vector = {1, 2, 3, 4, 5, 6, 7};

    for(int val : new_vector){
        if(val%2 == 0){
            cout << val << endl;
        }
        else{
            cout << val << " is odd" << endl;
        }
    }
}