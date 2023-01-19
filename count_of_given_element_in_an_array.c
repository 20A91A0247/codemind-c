#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,m,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        c=c+1;
    }
    cout<<c;
}