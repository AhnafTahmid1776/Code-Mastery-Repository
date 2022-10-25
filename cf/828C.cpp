#include <bits/stdc++.h>
using namespace std;

#define MAX 500


int main()
{
  int t;
  cin >> t;
  while(t--){
    int n,m,x[10],y[10];
    cin >> n>> m;
    for(int i=0; i<m; i++){
        cin >> x[i]>>y[i];
    }
    if(n>m){
        cout << "YES"<< endl;
    }

    else cout << "NO"<< endl;
  }
}




