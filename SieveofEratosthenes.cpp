#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    std::vector<int> v(n);
// 0 for non prime
// 1 for prime
// initially set all the value as 1 (prime) except 0 and 1
    for(int i = 0;i<n;i++)
    {
    	if(i==0||i==1)
    	{
    		v[i]=0;
    	}
    	else
    	{
    		v[i]=1;
    	}
    }
    for(int i = 2;i<n;i++)
    {
    	if(v[i]==1)
    	{
    		for(int k = 2;i*k<=n;k++)
    		{	
    			v[k*i] = 0;
    		}
    	}
    }
	for(int i = 0;i<n;i++)
	{
		if(v[i]==1)
		{
			cout<<i<<' ';
		}
	}
	return 0;
}
