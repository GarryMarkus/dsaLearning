#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int l = s.length();

    string s_only_alpha;
    for(int i = 0; i<l; i++){
        if(isalpha(s[i])){
            s_only_alpha.push_back(s[i]);
        }
    }

    reverse(s_only_alpha.begin(), s_only_alpha.end());  
    int k = 0;
    for(int j = 0; j<l; j++){
        if(isalpha(s[j])){
           s[j] = s_only_alpha[k];
           k++;
        }
    }

    cout << s;
    return 0;
}