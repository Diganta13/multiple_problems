#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,x,y,n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>x>>y;


        if (x > 3) puts("YES");
        else if (x == 1) puts(y == 1 ? "YES" : "NO");
        else puts(y <= 3 ? "YES" : "NO");
    }

}
