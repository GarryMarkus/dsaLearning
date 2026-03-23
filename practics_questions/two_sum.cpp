#include<bits/stdc++.h>
using namespace std;

/*
count(array.begin(), array.end(), diff);
my_set1.insert(element);
my_set1.insert(my_set2.begin(), my_set2.end());
my_set1.erase(element);
my_set1.size();
int sum = accumulate(s.begin(), s.end(), 0);
*/

int two_sum_brute(vector<int> array, int r_sum){
    int count = 0;
    int l = array.size();
    for(int i = 0; i<l; i++){
        for(int j = i+1; j < l; j++){
            if(array[i] + array[j] == r_sum){
                count++;
            }
        }
    }

    return count;
}

int main(){
    int k;
    cin >> k;

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << two_sum_brute(arr, k);

}