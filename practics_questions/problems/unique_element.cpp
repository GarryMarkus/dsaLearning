#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    unordered_set<int> new_set;
    int temp;
    for(int i = 0; i<n; i++){
        cin >> temp;        
        new_set.insert(temp);
    }

    int s = new_set.size();

    vector<int> sorted_vec(new_set.begin(), new_set.end());
    sort(sorted_vec.begin(), sorted_vec.end());

    int element;
    for(int i = 0; i<s; i++){
        element = sorted_vec[i];
        cout << element << " ";
    }

    cout << endl << s;
}