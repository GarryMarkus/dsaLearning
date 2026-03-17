#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, a;
    cin >> s >> a;

    int l_s = s.length();
    int l_a = a.length();

    if (l_a < 3 || l_a > 5) {
        cout << "False";
        return 0;
    }

    int i = 0; 
    int j = 0; 

    while (i < l_s && j < l_a) {
        if (s[i] == a[j]) {
            j++; 
        }
        i++; 
    }

    if (j == l_a) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}