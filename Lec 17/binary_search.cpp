#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> given_array, int search){
    int start = 0, end = given_array.size()-1;

    while(start <= end){
        int mid =  start+((end-start)/2);

        if(search == given_array[mid]){
            return mid;
        }
        else if(search < given_array[mid]){
            end = mid-1;
        }
        else if(search > given_array[mid]){
            start = mid+1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    cout << "Element Found at index: ";
    cout << binary_search(arr, key) << endl;

    return 0;
}