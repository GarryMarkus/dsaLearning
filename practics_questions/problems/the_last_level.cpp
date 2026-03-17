#include<bits/stdc++.h>
using namespace std;

int main(){
    int levels, minutes, eye_strain;
    cin >> levels >> minutes >> eye_strain;

    if(levels%3 == 0) {
        cout << (levels * minutes) + (levels/3 - 1)*eye_strain;
    }
    else {
        cout << (levels * minutes) + (levels/3)*eye_strain;
    }

    return 0;
}