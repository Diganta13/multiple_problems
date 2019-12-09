#include<bits/stdc++.h>
using namespace std;

long long int prime(int n)
{
    long long int i,k=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            k++;

        }
    }
    return k;

}

int main()
{
    long long int m,n,val,i;
    cin>>n;
    long long int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        val = prime(a[i]);
        if(val==1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }

}
