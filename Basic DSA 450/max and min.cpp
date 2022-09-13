#include <bits/stdc++.h>

using namespace std;

void maxx(int a[10],int high,int low){

for(int i=0; i<10;i++){
    high=a[0];
    if(a[i]> a[0]){
        high=a[i];
    }
}
cout << high<<endl;

}

void minn(int a[10],int high,int low){
for(int i=0; i<10;i++){
    low=a[0];
    if(a[i]< a[0]){
        low=a[i];
    }
}
cout << low<< endl;


}

int main()
{
int high,low;
int a[10];
for(int i=0; i<10;i++){
    cin >> a[i];
}
maxx(a,high,low);
minn(a,high,low);
return 0;
}
