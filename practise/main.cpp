#include <iostream>

using namespace std;

long long int bmd(long long int a,long long int b,long long int c)
{
        if(b==0){return 1;}

        else if(b%2==0)
        {
            long long int value=bmd(a,b/2,c);
            return (value*value)%c;
        }

        else if(b%2==1)
        {
            long long int x,y;
            x=a%c;
            y=bmd(a,b-1,c);
            return (x*y)%c;
        }

}


int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>c)
    {
        cout<<bmd(a,b,c)<<endl;
    }
}
