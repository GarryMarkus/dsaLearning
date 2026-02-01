#include <bits/stdc++.h>
using namespace std;

//method 1(brute force)
int count_digits1(int n){
    int count=1;
    while(n>9){
        n = n/10;
        count++;
    }
    return count;
}

//method 2
int count_digits2(int n){
    if(n==0){
        return 1;
    }
    else{
        return int(log10(n)+1);
    }
}

int main(){
    int num;
    cin >> num;
    int result = count_digits1(num);
    cout << result;
}