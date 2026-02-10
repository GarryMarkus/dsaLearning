#include<bits/stdc++.h>
using namespace std;

bool is_prime(int number){
    if (number <= 1){
        return false;
    }
    if(number == 2){
        return true;
    }
    for(int i = 3; i <= sqrt(number); i=i+2){
        if(number%i == 0){
            return false;
        }
    }
    return true;
}

bool is_even_digit_sum(int number){
    int sum = 0;
    while(number>0){
        sum = sum + number%10;
        number = number/10;
    }
    if(sum%2==0){
        return true;
    }
    else{
        return false;
    }
}


int even_sum_prime(int start, int finish){
    int count = 0;
    for(int i=start; i<=finish; i++){
        if(is_prime(i) && is_even_digit_sum(i)){
            count = count+1;
        }
    }
    return count;
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;

    cout << even_sum_prime(a, b);

}