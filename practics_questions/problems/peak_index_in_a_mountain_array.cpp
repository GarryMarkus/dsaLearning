#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int l = arr.size();

    int start = 0;
    int end = l-1;
    int mid;

    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    int key = temp.back();

    while(start <= end){
        mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }

        else if(arr[mid < arr[mid-1]]){
            end = mid-1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;

    int number;
    while(n--){
        cin >> number;
        arr.push_back(number);
    }

    cout << peakIndexInMountainArray(arr);
}