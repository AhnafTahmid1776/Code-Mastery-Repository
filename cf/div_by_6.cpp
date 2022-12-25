#include <bits/stdc++.h>
using namespace std;
int main() {

  int t;
  cin >> t;
  while(t--){
  int n;
  int c2=0,c3=0;
  cin >>n;
  while(!(n%2)){
    n=n/2;
    c2++;
  }
  while(!(n%3)){
    n=n/3;
    c3++;
  }
  if(n!=1 || c2>c3)cout << -1<<endl;
  else cout << (c3-c2)+c3<< endl;

  }


}

