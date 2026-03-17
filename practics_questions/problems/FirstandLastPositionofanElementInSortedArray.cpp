#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> array, int length, int key){
    int start = 0;
    int end = length - 1;

    while(start <= end){
        int mid = (start + end)/2;

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

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int pos = binary_search(arr, n, k);
    if (pos == -1) return {-1, -1};

    int startPos = pos;
    int endPos = pos;

    while (startPos > 0 && arr[startPos - 1] == k) {
        startPos--;
    }

    while (endPos < n - 1 && arr[endPos + 1] == k) {
        endPos++;
    }

    return {startPos, endPos};
}

int main(){
    int n, k, input;
    cin >> n; //number of element in an array
    cin >> k; //element to search
    vector<int> arr;

    for (int i=0; i<n; i++){
        cin >> input;
        arr.push_back(input);
    }
    
    sort(arr.begin(), arr.end());
    
    pair<int, int> result = firstAndLastPosition(arr, n, k);

    cout << result.first << " " << result.second;
}