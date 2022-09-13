#include <iostream>

using namespace std;

int main()
{
    int a[6];
    int temp;
    int k;
    cin >>k;
    for (int i=0; i<6; i++){
        cin >> a[i];
    }
    //sorting
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout <<"kth_Min : "<<a[k-1]<<endl;
     cout <<"kth_Max: "<< a[6-k];

}
