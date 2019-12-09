#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n,i,l;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        l=a.length();
        if(l>10)
        {   cout<<a[0];
            cout<<l-2;
            cout<<a[l-1]<<endl;
        }
        else
        cout<<a<<endl;
    }

}
