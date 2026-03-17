#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2;

    c1 = (a2 + b2) - (a1 + b1);
    c2 = (a1 + b1) - (a2 + b2);

    if (c1 > c2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}