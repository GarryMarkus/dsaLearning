#include <bits/stdc++.h>
using namespace std;

string sort_and_surf(string s){
    sort(s.begin(), s.end());
    return s;
}

int main(){
    string s;
    cin >> s;

    cout << sort_and_surf(s);
}