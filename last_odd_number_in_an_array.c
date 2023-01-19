#include<iostream>
using namespace std;
int main()
{
    int i,n,re;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int arr[n];
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            re=a[i];
        }
    }
    cout<<re;
}