#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,i,j,cost1=0,d,cost2=0;
    cin>>n>>m;
    long long int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cost2 = a[0]-1;
    for(i=0;i<m-1;i++)
    {
        if(a[i]<a[i+1])
        {

            cost1=cost1+(a[i+1]-a[i]);

        }
        else if(a[i]==a[i+1])
        {

            cost1=cost1+0;

        }
        else
        {
            d=(a[i]-a[i+1]);
            cost1=cost1+(n-d);

        }
    }

    cout<<cost1+cost2<<endl;
}
