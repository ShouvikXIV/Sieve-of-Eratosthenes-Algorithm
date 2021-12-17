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
	int v[n];
	for(int i = 0;i<=n;i++)
	{
		if(i==0||i==1)
		{
			v[i] = 0;
		}
		else
		{
			v[i] = 1;
		}
		for(int i = 2;i<=n;i++)
		{
			if(v[i]==1)
			{
				for(int j = i;i*j<=n;j++)
				{
					v[i*j] = 0;
				}
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