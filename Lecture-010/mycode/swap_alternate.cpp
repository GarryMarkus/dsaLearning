#include<bits/stdc++.h>
using namespace std;

void swap_alt(int arr[], int n){
    
    for(int i = 0; i<n; i++){
        if(i%2 == 1){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
    }

}


int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Array before swapping alternate" << endl;
    for(int i = 0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    swap_alt(arr, 10);

    cout << "Array after swapping alternate" << endl;
    for(int i = 0; i<10; i++){
        cout << arr[i] << " ";
    }

}