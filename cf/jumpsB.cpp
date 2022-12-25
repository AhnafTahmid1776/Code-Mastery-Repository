#include <bits/stdc++.h>
using namespace std;
int main() {

  long long int t;
  cin >> t;
  while(t--){
    int x;
    cin >>x;
    int step=1;
    while(step*(step+1)/2<x)step++;
    if(step*(step+1)/2-x==1)step++;
    cout << step << endl;
  }


}

