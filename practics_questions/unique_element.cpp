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
    for(const auto& element : new_set){
        cout << element << " ";
    }
    cout << endl << s;
}