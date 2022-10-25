    #include<iostream>
    using namespace std;
    int main()
    {
    int t;
    cin>>t;
    while(t--)
    {
    int n,q=0,a=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
    if(s[i]=='Q')
    q++;
    else
    {
    if(q>0)
    q--;
    }
    }
    if(q==0)
    cout<<"yes\n";
    else
    cout<<"no\n";
    }
    }
