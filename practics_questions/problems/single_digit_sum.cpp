#include <bits/stdc++.h>
using namespace std;

int single_digit_sum(string n, int k) {
    string n_concatenate = "";
    for(int i=0; i<k; i++){
        n_concatenate = n_concatenate + n;
    }

    int sum=0;
    while(sum>9){
        
        int n_int = stoi(n_concatenate);
        for(int i=0; i<n_concatenate.length(); i++){
            sum = sum + (n_int%10);
            n_int = n_int/10;
        }   
        n_concatenate = to_string(sum);
    }
    return sum;
}

int main() {
    string n;
    int k;
    cin >> n >> k;

    cout << single_digit_sum(n, k);

    return 0;
}