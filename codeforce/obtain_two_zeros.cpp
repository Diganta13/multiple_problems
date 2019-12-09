#include<bits/stdc++.h>
using namespace std;

int zero(int a,int b)
{
    int i;
    if(a==0 && b==0)
    {
        cout<<"YES"<<endl;
    }

    else if((a==0 && b==1) || (a==1 && b==0) || (a==1 && b==1))
    {
        cout<<"NO"<<endl;
    }

    else if(a<=b)
    {
            i=(b/2);
            a=a-i;
            b=b-(2*i);

        return zero(a,b);
    }

    else if(a>b)
    {
            i=(i/2);
            b=i;
            a=a-(2*i);

        return zero(a,b);
    }


}


int main()
{

    int a,b,t,j;
    //cin>>t;
    //for(j=0;j<t;j++)
    //{
        cin>>a>>b;
        zero(a,b);
    //}
}
