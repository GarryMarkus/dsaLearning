#include <bits/stdc++.h>
using namespace std;

//method 1(brute force, some signed integer range edge cases are unresolved)
int reverse_a_number1(long int n){
    int result = 0;
    int l;
    if(n<0){
        n = (-1) * n;
        l = int(log10(n)+1);
        for(int i = 0; i < l; i++){
            result = result * 10;
            if(result > 2147483648){
                return 0;
            }
            result = result + (n % 10);
            n = n / 10;
        }
        result = (-1) * result;
    }

    else{
        if(n == 0){
            return 0;
        }
        else{
            l = int(log10(n)+1);
        }
        for(int i = 0; i < l; i++){
            result = result * 10;
            if(result > 2147483647){
                return 0;
            }
            result = result + (n % 10);
            n = n / 10;
        }
    }
    return result;
}

int reverse_a_number2(int num){

}

int main(){
    int num;
    cin >> num;
    cout << reverse_a_number2(num);
    return 0;
}