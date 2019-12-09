#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,index;
    cin>>n>>index;
    int a[n];
    for(i=0;i<n;i++)
    {
     cin>>a[i];
    }
    a=sort(a,n);
    for(i=0;i<n;i++)
    {
     cout<<a[i];
    }

}
