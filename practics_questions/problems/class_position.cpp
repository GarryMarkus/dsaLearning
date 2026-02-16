#include<bits/stdc++.h>
using namespace std;

int class_position(vector<int> arr, int number){
    vector<int> copy;
    copy = arr;
    
    sort(copy.begin(), copy.end(), greater<int>());


    for(int j = 0; j < number; j++){
        int find = arr[j];
        for(int k = 0; k < number; k++){
            if(copy[k] == find){
                cout << k+1 << " ";
                break;
            }
        }
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

    class_position(array, n);
}