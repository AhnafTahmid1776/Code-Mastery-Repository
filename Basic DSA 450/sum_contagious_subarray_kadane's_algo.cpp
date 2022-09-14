#include <bits/stdc++.h>


using namespace std;

int main()
{   int b[8],sum=0,x,y;
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    for(int i=0; i<8; i++){
        b[i]=a[i];
    }
     sort(b,b+8);
     int n=b[7];
     int m=b[6];

     for(int i=0;i<8;i++){
        if(a[i]==n){
            x=i;
        }
        else if(a[i]==m){
            y=i;
        }
     }
     int p=max(x,y);
     int q=min(x,y);

     for(int i=q;i<=p;i++){
        sum+=a[i];
     }
cout << sum<< endl;
}



