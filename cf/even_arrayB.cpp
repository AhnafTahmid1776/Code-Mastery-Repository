    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         int odd=0,even=0,fine=0;
         cin >> n;
          int a[1001];
         for(int i=0; i<n; i++){
            cin >> a[i];
            if(i%2==0){
                if(a[i]%2==0){
                    fine++;
                }
                else{
                    odd++;
                }
            }
            else{
                    if(a[i]%2==0){
                        even++;
                    }
                  else{
                fine++;
            }

            }


         }
         if(fine==n){
            cout << 0<< endl;
         }
         else if(odd==even){
            cout << odd<< endl;
         }
         else if(odd!=even ){
            cout << -1<< endl;
         }

    }
    }

