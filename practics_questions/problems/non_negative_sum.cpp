#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    if (!(cin >> t)) return 0;
    
    while(t--) {
        cin >> n;
        long long current_sum = 0;
        int count = 0;
        vector<int> negatives;

        for(int i = 0; i < n; i++) {
            int val;
            cin >> val;
            if (val >= 0) {
                current_sum += val;
                count++;
            } else {
                negatives.push_back(val);
            }
        }

        sort(negatives.rbegin(), negatives.rend());

        for (int neg : negatives) {
            if (current_sum + neg >= 0) {
                current_sum += neg;
                count++;
            } else {
                break; 
            }
        }

        if (count > 0) {
            cout << count << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}