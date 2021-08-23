#include <bits/stdc++.h>
using namespace std;

void pr()
{
    int n;
    cin >> n;
    long long f[n + 7] = {0};
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= min(3, i); j++)
        {
            f[i] += f[i - j];
        }
    }

    cout << f[n] << '\n';
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