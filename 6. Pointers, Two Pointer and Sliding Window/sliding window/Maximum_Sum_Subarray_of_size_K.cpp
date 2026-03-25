#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr, int k) {
    int l = arr.size();
    int sum = 0;
    int max_sum = 0;
    int i = k;
    
    while(i--){ //first window sum using loop
        sum = sum + arr[i];
    }

    max_sum = sum;

    for(i = 1; i <= (l - k); i++){// just sliding windows and finding sum without nested loop
        sum = sum - arr[i - 1] + arr[i + k -1];
        if(sum > max_sum){
            max_sum = sum;
        }
    }
    return max_sum;
}

int main(){
    vector<int> arr= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;

    cout << maxSubarraySum(arr, k);

}