#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int arr[5]={0, 1, 2, 3, 4};
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = 0;
            for(int k=i; k<=j; k++){
                sum = sum+arr[k];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}