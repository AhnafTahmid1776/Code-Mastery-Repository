#include <bits/stdc++.h> //header

using namespace std;


char getMaxOcc(string s){
int arr[26]={0};

for(int i=0; i<26 ; i++){
    char ch= s[i];
    int number =0;
    number = ch -'a'; // all numbers in lower case
    arr[number++];
}

//find maximum occ character

int maxi =-1,ans =0;
for(int i=0; i<26; i++){
    if(maxi <arr[i]){
        ans =i;
        maxi = arr[i];
    }
}

char finalAns = 'a'+ans;
return finalAns;


}

int main()
{
 string s;
 cin >> s;
 cout << getMaxOcc(s);
 return 0;
}

