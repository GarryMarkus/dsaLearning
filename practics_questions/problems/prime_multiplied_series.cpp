#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int N;
    cin >> N;
    int count = 0;
    int num = 2;
    while (count < N) {
        if (isPrime(num)) {
            int first = num;
            num++;
            while (!isPrime(num))
                num++;
            int second = num;
            if (count < N) {
                cout << first << " ";
                count++;
            }
            if (count < N) {
                cout << second << " ";
                count++;
            }
            if (count < N) {
                cout << first * second << " ";
                count++;
            }
        }
        num++;
    }

    return 0;
}