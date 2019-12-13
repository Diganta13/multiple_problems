#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,hr,mr;

    cin>>h>>m;

    h=12-h;
    m=(60-m)%60;

    if(m !=00)
        --h;

    if(h==0)
        hr = 12;

    if(m<10)
        cout<<h<<":0"<<m<<endl;

    else
        cout<<h<<":"<<m<<endl;



}

