#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    string a,b;
    int suma=0,sumb=0,i,l;

    cin>>a;
    cin>>b;

    l=a.length();

    for(i=0;i<=l;i++)
        {
            if(a[i]>=65 && a[i]<=92 )
            {
                a[i]=a[i]+32;
            }
            if (b[i]>=65 && b[i]<=92)
            {
                b[i]=b[i]+32;
            }
        }
        int p=0;
    for(i=0;i<=l;i++)
        {
            if(a[i]>b[i]){cout<<"1"<<endl;break;}
            else if(a[i]==b[i]){p++;}
            else {cout<<"-1"<<endl;break;}
        }
    if(p==l+1){cout<<"0"<<endl;}
}

