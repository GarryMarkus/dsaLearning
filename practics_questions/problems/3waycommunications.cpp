#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
        long long r;
        cin >> r;
        long long x[3], y[3];
        for(int i = 0; i < 3; i++) {
            cin >> x[i] >> y[i];
        }
        
        long long r_sq = r * r;
        
        long long d12 = (x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]);
        long long d23 = (x[1] - x[2]) * (x[1] - x[2]) + (y[1] - y[2]) * (y[1] - y[2]);
        long long d31 = (x[2] - x[0]) * (x[2] - x[0]) + (y[2] - y[0]) * (y[2] - y[0]);
        
        int count = 0;
        if(d12 <= r_sq) count++;
        if(d23 <= r_sq) count++;
        if(d31 <= r_sq) count++;
        
        if(count >= 2) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
