#include <bits/stdc++.h>
using namespace std;

void pr()
{
    int n;
    cin >> n;
    int a[n + 7];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int f[n + 7] = {0};
    f[0] = 0;
    int maz = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] <= a[i])
            {
                f[i] = max(f[i], f[j]);
            }
        }
        f[i]++;
        maz = max(maz, f[i]);
    }
    cout << n - maz << '\n';
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