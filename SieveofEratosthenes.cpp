#include <bits/stdc++.h>
using namespace std;

//int prime[100001];

bool sieve(int l)
{
    
    vector<int> arr1(l+1,1);
    
    for(int i = 2;i<=l;i++)
    {
        if(arr1[i]==1)
        {
            for(int k = 2;i*k<=l;k++)
            {
                arr1[i*k] = 0;
            }
        }
    }

    arr1[0] = 0;
    arr1[1] = 0;

    for(int i= 0;i<=l;i++)
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
    sieve(l);
    return 0;

}
