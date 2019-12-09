#include <bits/stdc++.h>

using namespace std;

void BubbleSort(int a[], int array_size)
{
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n,index,i;
    cin>>n>>index;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int value=a[index-1],k=0;
    BubbleSort(a,n);

    for(i=0;i<n;i++)
    {
        if(a[i]>=value && a[i]!=0)
        {k++;}
    }

    cout<<k<<endl;
}
