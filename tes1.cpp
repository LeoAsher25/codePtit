#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int A[n + 5];
		for (int i = 0; i < n; i++)
			cin >> A[i];
		sort(A, A + n);
		int counter = 0;
		for (int i = 0; i < n; i++)
		{
			int x1 = A[i] - k, x2 = A[i] + k;
			int ind1 = upper_bound(A + i, A + n, x1) - A;
			int ind2 = lower_bound(A + i, A + n, x2) - A;
			counter += (ind2 - ind1 + 1);
		}
		cout << counter << endl;
	}
	return 0;
}
