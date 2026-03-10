#include <bits/stdc++.h>
using namespace std;

void left_rotate(string &s, int d) {
    int n = s.length();
    if (n == 0) return;
    d = d % n; 
    rotate(s.begin(), s.begin() + d, s.end());
}

void right_rotate(string &s, int d) {
    int n = s.length();
    if (n == 0) return;
    d = d % n;
    rotate(s.rbegin(), s.rbegin() + d, s.rend());
}

int main() {
    string S, R;
    if (!(cin >> S >> R)) return 0;

    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int val;
        cin >> val;
        
        if (val < 0) {
            left_rotate(S, abs(val));
        } else if (val > 0) {
            right_rotate(S, val);
        }
    }

    if (S == R) {
        cout << "Password Accepted";
    } else {
        cout << "Try Again";
    }

    return 0;
}