#include <bits/stdc++.h>
using namespace std;
main()
{
	int n, i;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int c = 1, maxi = 0;
	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] >= a[i - 1])
		{
			c++;
		}
		else
		{
			c = 1;
		}
		maxi = max(maxi, c);
	}
	cout << maxi;
}
