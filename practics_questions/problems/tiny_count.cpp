#include<bits/stdc++.h>
using namespace std;

int tiny_count(vector<int> arr, int number){
    for(int i = 0; i < number; i++){
        int find = arr[i];
        int count = 0;
        for(int j = i; j < number; j++){
            if(find > arr[j]){
                count++;
            }
        }
        cout << count << " ";
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

    tiny_count(array, n);
}