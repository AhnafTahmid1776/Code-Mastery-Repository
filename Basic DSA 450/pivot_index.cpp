#include <bits/stdc++.h> //header

using namespace std;


int pivotIndex(int arr[], int n){

int s=0;
int e=n-1;
int mid =s+(e-s)/2;
int ans=-1;
int sum_left =0,sum_right=0;

while(s<=e){
    for(int i=s; i<mid ; i++){
    sum_left+= arr[i];
}

for(int j=mid+1; j<=e ; j++){
    sum_right+= arr[j];
}
if(sum_left > sum_right){
    mid--;
}
else if(sum_left < sum_right){
    mid++;
}

}

    ans = mid;
    return ans;
}







int main()
{
 int arr[6]={1,7,3,6,5,6};

 cout << pivotIndex(arr,6);


 return 0;
}

