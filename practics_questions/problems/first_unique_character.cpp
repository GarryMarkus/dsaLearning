#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (count[s[i] - 'a'] == 1) {
            cout << i << endl;
            return 0; 
        }
    }

    cout << -1 << endl;

    return 0;
}