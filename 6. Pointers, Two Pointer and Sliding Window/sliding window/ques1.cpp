#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n; //length of subarray
    cin >> n;

    int sum = 0;
    int highest_sum = 0;
    
    int i; 
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    while(i <= 10){
        if(sum > highest_sum){
            highest_sum = sum;
        }

        sum = sum -  arr[i-n] + arr[i];
        i++;
    }    

    cout << highest_sum;

}