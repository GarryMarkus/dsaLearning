#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        cout << arr[left] << " ";
        left++;

        if (left <= right) {
            cout << arr[right] << " ";
            right--;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rearrange(arr);

    return 0;
}