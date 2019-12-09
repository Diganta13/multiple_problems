#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n,i,x=0;
    string a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a=="++X" || a=="X++"){x++;}
        else {x--;}

    }
    cout<<x<<endl;


}
