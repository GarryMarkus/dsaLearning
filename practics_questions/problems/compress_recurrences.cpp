#include<bits/stdc++.h>
using namespace std;

void compress_recurrences(string given_string, int compression_value){
    int l = given_string.length();
    int count = 1;
    for(int i=0; i<l; i++){
        if(given_string[i] == given_string[i+1]){
            count ++;
        }
        else{
            if(count < compression_value){
                for(int j=0; j<count; j++){
                    cout << given_string[i];
                }
                count = 1;
            }
            else{
                cout << given_string[i] << count;
                count = 1;
            }
        }
    }
}

int main(){
    string s;
    cin >> s;

    int n;
    cin >> n;

    compress_recurrences(s, n);

    return 0;
}