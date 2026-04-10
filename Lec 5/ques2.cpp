//calculate nCr binomail coefficient for n and r => nCr = n! / (r! * (n-r)!)

#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 1; i<num; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n, r;
    cin >> n >> r;
    cout << "nCr = " << factorial(n) / (factorial(r) * factorial(n-r));
}