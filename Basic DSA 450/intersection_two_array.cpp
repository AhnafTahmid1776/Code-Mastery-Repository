#include <bits/stdc++.h>


using namespace std;

int main()
{
int a[]={1,3,4,5,7};
int b[]={2,3,5,6};
sort(a,a+5);
sort(b,b+4);
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(a[i]==b[j]){
            cout << a[i]<< " ";
        }
    }
}
}



