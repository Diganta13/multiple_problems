#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,j;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n],sum=0;

        for(j=0;j<n;j++)
        {
            cin>>a[j];
            sum=sum+a[j];
        }

        cout<<sum/n<<endl;



    }
}
