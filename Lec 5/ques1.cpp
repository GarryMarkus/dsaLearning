//calculate sum of digits of number

#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int number){
    int sum = 0;
    while(number > 0){
        sum = sum + number%10;
        number = number/10;
    }
    return sum;
}

int main(){
    int num;
    cin >> num;

    cout << sum_of_digits(num);
}