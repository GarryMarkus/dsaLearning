#include <bits/stdc++.h>
using namespace std;

int binary_search(int array[], int length, int key){
    int start = 0;
    int end = length - 1;

    int mid = (start + end)/2;

    while(start <= end){
        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] < key){
            start = mid + 1;
        }
        else if(array[mid] > key){
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int find;
    cin >> find;

    cout << binary_search(arr, n, find);

}