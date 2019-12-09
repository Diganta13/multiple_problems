#include<bits/stdc++.h>
using namespace std;

int main()
{
      string a,b;

      int l,i,k,lb2=0;
      cin>>a;
      l=a.length();

      for(i=0;i<=l;i++)
        {
            if(a[i]>=65 && a[i]<=92)
            {
                a[i]=a[i]+32;
            }
        }


      for(i=0;i<l;i++)
      {


            if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u')
            {
                    cout<<'.'<<a[i];

            }
      }


}
