#include<bits/stdc++.h>
using namespace std;

void reverse_string(vector<char>& s) {
    int n = s.size();
    
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - 1 - i]);
    }

    for (int j = 0; j < n; j++) {
        cout << s[j];
    }
    cout << endl;
}

int main() {
    int n;
    char temp; 
    vector<char> vec;

    cin >> n;

    while (n--) {
        cin >> temp;
        vec.push_back(temp);
    }

    reverse_string(vec);

    return 0;
}