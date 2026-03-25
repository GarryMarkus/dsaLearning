//incomplete solution

#include<bits/stdc++.h>
using namespace std;
int smallestSubstring(string s) {
    int l = s.length();
    int k = 3;
    int min_substring = 0;
    
    int i = 0;

    string substring;
    while(k <= l){
        for(i = 0; i <= (l - k); i++){
            substring = s.substr(i, k);
            unordered_set<char> substring_set(substring.begin(), substring.end());

            if(substring_set.size() == k){
                return k;
            }
        }
        k++;
    }
}


int main(){
    string s = "0221212";

    cout << smallestSubstring(s);
}