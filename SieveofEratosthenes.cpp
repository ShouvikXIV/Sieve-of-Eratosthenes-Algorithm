#include <bits/stdc++.h>
using namespace std;

void sieve(int r, int l)
{
    int arr1[l];
    for(int i = 0;i<=l;i++)
    {
        if(i==0||i==1)
        {
            arr1[i]= 0;
        }
        else
        {
            arr1[i] = 1;
        }
    }

    for(int i = 2;i*i<=l;i++)
    {
        if(arr1[i]==1)
        {
            for(int k = 2;i*k<=l;k++)
            {
                arr1[i*k] = 0;
            }
        }
    }

    for(int i = r;i<l;i++)
    {
        if(arr1[i]==1)
        {
            cout<<i<<' ';
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r,l;
    cin>>r>>l;
    sieve(r,l);
    return 0;

}
