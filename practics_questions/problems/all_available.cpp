#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;

    string s1, s2;
    cin >> s1;
    cin >> s2;

    set<char> s1_set(s1.begin(), s1.end());
    set<char> s2_set(s2.begin(), s2.end());

    set<char> intersected;

    set_intersection(s1_set.begin(), s1_set.end(), s2_set.begin(), s2_set.end(), inserter(intersected, intersected.begin()));

    if(intersected.size() == s1_set.size()){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    
}