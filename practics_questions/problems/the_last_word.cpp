#include<bits/stdc++.h>
using namespace std;

int lenght_of_last_word(string given_string){
    int l = given_string.length();
    int count = 0;
    int flag = 0;
    for(int i = l-1; i >= 0; i--){
        if(given_string[i] == '*' || given_string[i] == '#' || given_string[i] == '&' || given_string[i] == ' '){
            if(flag == 1){
                break;
            }
            else{
                continue;
            }
        }
        else{
            flag = 1;
            count++;
        }
    }

    return count;
}

int main(){
    string s;
    getline(cin, s);

    cout << lenght_of_last_word(s);
}