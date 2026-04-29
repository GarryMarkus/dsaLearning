#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int start = 0, end = nums.size()-1, mid;

    while(start <= end){
        mid = start+((end-start)/2);
        if(target == nums[mid]){
            return mid;
        }
        else{
            if(nums[start] <= nums[mid]){//left sorted
                if(nums[start] <= target && target <= nums[mid]){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }

            }
            else if(nums[mid] <= nums[end]){
                if(nums[mid] <= target && target <= nums[end]){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
    }
    return -1;
}

int main(){
    vector<int> array = {4, 5, 6, 7, 0, 1, 2};

    int find;
    cin >> find;

    cout << search(array, find);
}