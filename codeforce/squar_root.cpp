#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s=1,a;
    cin>>a;
    int e=a;
    double ans,mid;



    while(s<=e)
    {
        mid=(s+e)/2;
        if(a==2){mid=1;break;}

        else if(mid*mid==a){break;}

        else if(mid*mid<a)
        {
            s=mid+1;
        }

        else{e=mid-1;}
    }
    ans=mid;

    double increment = 0.1;
    for (int i = 0; i <= 5; i++) {
        while (ans * ans <= a) {
            ans += increment;
        }

        // loop terminates when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }

  printf("%.10lf",ans);
}
