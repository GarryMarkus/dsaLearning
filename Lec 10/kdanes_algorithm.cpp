#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-2, -3, -4, -5, -1};
    int n = 5;

    int cur_sum = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        cur_sum = cur_sum+arr[i];
        max_sum = max(cur_sum, max_sum);
        if(cur_sum<0){
            cur_sum = 0;
        }
    }

    cout << max_sum;
}