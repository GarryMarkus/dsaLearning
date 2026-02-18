#include <bits/stdc++.h>
using namespace std;

int best_time(vector<int> price_per_day, int days_count){
    int gap = 0;
    for(int i=0; i<days_count; i++){
        for(int j=i; j<days_count; j++){
            if(gap < (price_per_day[j] - price_per_day[i])){
                gap = (price_per_day[j] - price_per_day[i]);
            }
        }
    }
    return gap;
}

int main(){
    int n;
    cin >> n;

    vector<int> prices;
    int x;

    for (int i=0; i<n; i++){
        cin >> x;
        prices.push_back(x);
    }

    cout << best_time(prices, n);
}