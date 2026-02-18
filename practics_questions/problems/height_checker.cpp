#include <bits/stdc++.h>
using namespace std;

int height_checker(vector<int>list, int number){
    vector<int> copy_list;
    copy_list = list;

    sort(copy_list.begin(), copy_list.end());

    int count = 0;

    for(int i=0; i<number; i++){
        if(list[i] != copy_list[i]){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> height_list;
    int entry;

    for(int i=0; i<n; i++){
        cin >> entry;
        height_list.push_back(entry);
    }

    cout << height_checker(height_list, n);

}