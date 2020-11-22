#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	int n, m, f;
	cin >> n >> m;
	int a[n], b[m], i, j;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < m; i++)
		cin >> b[i];
	for (i = 0; i < n; i++)
	{
		if (a[i] > b[0])
		{
			swap(a[i], b[0]);
			f = b[0];
			for (j = 1; j < m && b[j] < f; j++)
			{
				b[j - 1] = b[j];
			}
			b[j - 1] = f;
		}
	}
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	for (i = 0; i < m; i++)
		cout << b[i] << " ";
	return 0;
}