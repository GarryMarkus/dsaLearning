#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size(), prod = 1;
    vector<int> prefix_prod;        
    vector<int> suffix_prod;        
    vector<int> total_prod;
    
    for(int i = 0; i < n; i++){
        if(i == 0){
            prod = 1;
        }
        else{
            prod = prod*nums[i-1];
        }
        prefix_prod.push_back(prod);
    }
    for(int i = n; i > 0; i--){
        if(i == n){
            prod = 1;
        }
        else{
            prod = prod*nums[i];
        }
        suffix_prod.push_back(prod);
    }
    reverse(suffix_prod.begin(), suffix_prod.end());

    for(int i = 0; i < n; i++){
        total_prod.push_back(prefix_prod[i]*suffix_prod[i]);
    }
    
    return total_prod;
}

/* brute force
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();\
    vector<int> answer;
    int prod;
    for(int i = 0; i < n; i++){
        prod = 1;
        for(int j = 0; j < n; j++){
            if(i != j){
                prod = prod*nums[j];
            }
        }
        answer.push_back(prod);
    }
    return answer;
}
*/
int main(){
    vector<int> given_array = {1, 2, 3, 4};
    vector<int> returning = productExceptSelf(given_array);
    for(int i = 0; i < 4; i++){
        cout << returning[i] << " ";
    }
}