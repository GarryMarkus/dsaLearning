#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    /* approach 1: brute force
    int maximum = 0, current, n = height.size(),base;
    
    for(int left = 0; left < n-1; left++){
        for(int right = left+1; right < n; right++){
            base = right-left;
            current = base*min(height[left], height[right]);
        }
        maximum = max(maximum, current);
    }

    return maximum;
    */

    int left = 0, right = height.size()-1, current, maximum = 0, base;

    while(left < right){
        base = right-left;
        current = base*min(height[left], height[right]);
        maximum = max(current, maximum);
 
        height[left] < height[right] ? left++ : right--;
    }

    return maximum;
}

int main(){
    vector<int> given_array = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << maxArea(given_array);
}