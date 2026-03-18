#include<bits/stdc++.h>
using namespace std;

string split_and_reverse(string s){
    int l = s.length();

    string s_left, s_right;

    for(int i=0; i<l/2; i++){
            s_left.push_back(s[i]);
        }
        reverse(s_left.begin(), s_left.end());
        
        for(int j=l/2; j<l; j++){
            s_right.push_back(s[j]);
        }
        reverse(s_right.begin(), s_right.end());

        string result = s_left + s_right;
        
        return result;
}

int main(){
    string s1, s2;
    cin >> s1;

    string new_string = split_and_reverse(s1);

    s2 = new_string;
    reverse(new_string.begin(), new_string.end());
    if(s2 == new_string){
        cout << s2<< " True";
    }
    else{
        cout << s2 << " False";
    }
}