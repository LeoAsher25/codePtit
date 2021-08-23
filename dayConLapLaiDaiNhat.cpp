#include <bits/stdc++.h>
using namespace std;

void pr()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    int f[n + 3][n + 3] = {{0}};
    memset(f, 0, sizeof f);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << f[i][j] << ' ';
            if (s[i] == s[j] && i != j)
            {
                f[i + 1][j + 1] = f[i][j] + 1;
            }
            else
                f[i + 1][j + 1] = max(f[i][j + 1], f[i + 1][j]);
        }
    }
    cout << f[n][n] << '\n';
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