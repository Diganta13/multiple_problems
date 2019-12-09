#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j;

    cin>>m>>n;

    for(i=0;i<n;i++)
    {
        if(m%10!=0)
        {
            m=m-1;
        }
        else
        {
            m=m/10;
        }
    }


cout<<m<<endl;
}
