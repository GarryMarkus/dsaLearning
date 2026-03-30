#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_set<char> s_set(s.begin(), s.end());
    
    int l = s.size();
    int sum = 0;
    cout << l << endl;
    for(char c : s_set){
        sum = sum + int(c);
    }

    cout << sum;
    
}