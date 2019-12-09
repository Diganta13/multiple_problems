#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,i,j,cnt=0,p=0;
    cin>>m;
    int a[m][3];

    for(i=0;i<m;i++)
        {   int k=0;
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1){k++;}
            }

            if(k>=2){p++;}

        }

    cout<<p<<endl;


}
