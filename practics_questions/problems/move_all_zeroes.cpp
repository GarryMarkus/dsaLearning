#include<bits/stdc++.h>
using namespace std;

int move_all_zero(vector<int> arr, int number){
    int copy[number] = {0};
    int copy_index = 0;
    for(int i = 0; i < number; i++){
        if(arr[i] != 0){
            copy[copy_index] = arr[i];
            copy_index++;
        }
    }
    for(int j =0; j < number; j++){
        cout << copy[j] << " ";
    }
    return 0;
}

int main(){
    int n, num;
    cin >> n;

    vector<int> array;

    for(int i = 0; i < n; i++){
        cin >> num;
        array.push_back(num);
    }

    move_all_zero(array, n);
}