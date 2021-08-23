
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

void pr()
{
	int n, k;
	cin >> n >> k;
	int d[n + 7] = {0};
	d[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= min(k, i); j++)
		{
			d[i] += d[i - j];
			d[i] %= MOD;
		}
	}
	cout << d[n] << '\n';
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		pr();
	}
	return 0;
}