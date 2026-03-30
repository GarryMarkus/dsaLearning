#include <bits/stdc++.h>
using namespace std;

bool TwoSum(vector<int>& nums, int target) {
    unordered_set<int> seen;
    
    for (int x : nums) {
        if (seen.count(target - x)) return true;
        seen.insert(x);
    }
    
    return false;
}

int main(){

    vector<int> nums = {1, 4, 45, 6, 10, 8};
    int target = 16;

    if (TwoSum(nums, target)) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    return 0;
}