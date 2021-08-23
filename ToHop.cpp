#include <bits/stdc++.h>
using namespace std;
long long a[1007][1007];
const long long MOD = 1e9 + 7;

int Tohop(int n, int k)
{
	if (a[n][k])
		return a[n][k];
	if (k == 0 || k == n)
		a[n][k] = 1;
	else if (k == 1 || k == n - 1)
		a[n][k] = n;
	else
		a[n][k] = (Tohop(n - 1, k - 1) + Tohop(n - 1, k)) % MOD;
	return a[n][k];
}

void pr()
{
	int n, k;
	cin >> n >> k;
	cout << Tohop(n, k) << '\n';
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