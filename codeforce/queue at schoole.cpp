#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,t,i,j;
    string s;
    cin>>m>>t;
    cin>>s;

    for(i=0;i<t;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
                {
                        s[j+1]='B';
                        s[j]='G';
                        j++;


                }
        }

    }

    cout<<s<<endl;

}
