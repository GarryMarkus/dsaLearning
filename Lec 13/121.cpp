#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

long required_min(vector<int> prices, int index){
    long first = prices[0];
    for(int i = 0; i<index; i++){
        if(first > prices[i]){
            first = prices [i];
        }
    }

    return first;
}

int maxProfit(vector<int>& prices) {
    /*
    approach 1:
    int n = prices.size();
    int current;
    int max = 0;
    for(int buy = 0; buy < n-1; buy++){
        for(int sell = buy+1; sell < n; sell++){
            if(prices[sell]-prices[buy] > 0){
                current = prices[sell]-prices[buy];
                if(current > max){
                    max = current;
                }
            }
        }
    }

    return max;
    */

    long n = prices.size(), buy, current, max = 0;
    for(int sell = 1; sell < n; sell++){
        buy = required_min(prices, sell);
        if(buy < prices[sell] && max < (prices[sell]-buy)){
            max = prices[sell]-buy;
        }
    }

    return max;
}

int main(){
    vector<int> given_prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(given_prices);
}