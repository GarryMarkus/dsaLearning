#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
    int pro = 1;
    int sum = 0;
    
    while(n>0){
        sum = sum + (n%10);
        pro = pro * (n%10);

        n = n/10;
    }

    int diff = (pro - sum);

    return diff;
}

int main(){

    int num;
    cin >> num;

    cout << subtractProductAndSum(num);
}