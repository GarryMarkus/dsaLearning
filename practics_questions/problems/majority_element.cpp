#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[n/2];
}

int main(){
    int n, number;
    cin >> n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        cin >> number;
        arr.push_back(number);
    }

    cout << majority_element(arr);
}