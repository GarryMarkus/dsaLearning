#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int l){
    int start=0;
    int end=l-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    reverse_array(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}