#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(int dec) {
    string bin;

    if(dec == 0){
        return "0";
    }
    else if(dec < 0){
        
    }
    else{
        while(dec > 0){
            bin = bin + (dec%2 == 0 ? "0" : "1");
            dec = dec / 2;
        }
    }

    reverse(bin.begin(), bin.end());
    
    return bin;
}

int main(){
    int num;
    cin >> num;

    cout << "Number in binary: " << dec_to_bin(num) << endl;

}