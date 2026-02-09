#include<bits/stdc++.h>
using namespace std;

int problem_easy_or_hard(int input_array[], int size){
    for (int j=0; j<size; j++){
        if (input_array[j] == 1){
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}

int main(){
    int t;
    cin >> t;
    int arr[t];
    for (int i=0; i<t; i++){
        cin >> arr[i];
    }

    problem_easy_or_hard(arr, t);
}