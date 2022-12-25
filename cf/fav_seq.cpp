#include <bits/stdc++.h>
using namespace std;
int main() {

  long long int t;
  cin >> t;
  while(t--){
    int n,k=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n; i++){
        cin >>a[i];
    }
    for(int i=0;i<n; i++){
       if(i%2==0){
        cout << a[k]<<" ";
        continue;
       }
       else {
        cout << a[n-k-1]<< " ";
        k++;
       }
    }

cout << endl;
  }


}

