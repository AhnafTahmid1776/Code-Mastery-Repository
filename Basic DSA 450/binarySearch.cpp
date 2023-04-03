#include <bits/stdc++.h> //header

using namespace std;


int binarySearch(int arr[], int size, int key){
   int start= 0;
   int end =size-1;

   int mid=start+(end-start)/2;

   while(start<=end){
    if(arr[mid] == key){
        return mid;
    }
    if(arr[mid]>key){
        end =mid-1;

    }
    else{
        start =mid +1;
    }
   start+(end-start)/2
   }
   return -1;

}



int main()
{
 int odd[5]={1,2,32,44,55};
 int even[6]={3,5,7,8,10,12};

int binodd=binarySearch(odd,5,44);

cout << binodd<< endl;
}

