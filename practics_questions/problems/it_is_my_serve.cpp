#include<bits/stdc++.h>
using namespace std;

int main(){
    int p, q;
    cin >> p >> q;

    int n = (p+q)/2;
    if( n%2 == 0) {
        cout << "ALICE";
    }
    else {
        cout << "BOB";
    }

    return 0;
}