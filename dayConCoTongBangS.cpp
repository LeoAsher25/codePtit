#include <bits/stdc++.h>
using namespace std;

int n, s;
int a[203];

void pr()
{
    cin >> n >> s;
    int L[s + 1] = {0};
    L[0] = {1};
    L[s] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int t = s; t >= a[i]; t--)
        {
            if (L[t] == 0 && L[t - a[i]] == 1)
                L[t] = 1;
        }
    }
    if (L[s] == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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