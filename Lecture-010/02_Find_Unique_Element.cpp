#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    vector<int> vec(arr, arr+size);
    sort(vec.begin(), vec.end());

    size = vec.size();

    int i = 0;
    while(i < size){
        if(vec[i] == vec[i-1] || vec[i] == vec[i+1]){
            i++;
        }
        else{
            return vec[i];
        }
    }
}
