#include<bits/stdc++.h>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  
  int n = y-x;
  if(n%8 == 0){
    cout << 0 << endl;
  }
  else {
    cout << ((y-x)/8 + 1) << endl;
  }
  return 0;
}