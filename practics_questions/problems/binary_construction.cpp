#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n; 
        
        string result = "";
        if (n == 2) {
            result = "01";
        } 
        else if (n == 3) {
            result = "001";
        } else {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    result += '0';
                } else {
                    result += '1';
                }
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}