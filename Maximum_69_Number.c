#include<iostream>

using namespace std;
int fun(int n);
int main()
{
    int n;
    //int a[4];
    cin>>n;
    cout<<fun(n);
}
int fun(int n)
{
    int a[4];
    int i=3;
    while(n!=0)
    {
        a[i--]=n%10;
        n=n/10;
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]==6)
        {
            a[i]=9;
            i=4;
        }
    }
    int ans=0,mul=1;
    for(i=3;i>=0;i--){
        ans+=(mul*a[i]);
        mul*=10;
    }
    return ans;
    
}
