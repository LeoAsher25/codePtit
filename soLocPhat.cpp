#include <bits/stdc++.h>
using namespace std;

bool checkDoiXung(string s)
{
    int l = 0, r = s.length() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++, r--;
    }
    return true;
}

void pr()
{
    int n;
    cin >> n;
    string s = "";
    int len = 2;
    vector<string> res;
    res.clear();

    while (res.size() < n)
    {
        for (int i = 0; i < len; i++)
        {
            s.push_back('6');
        }
        while (1)
        {
            if (checkDoiXung(s))
                res.push_back(s);
            if (res.size() >= n)
                break;
            int i = len - 1;
            while (i >= 0 && s[i] == '8')
            {
                s[i--] = '6';
            }
            if (i < 0)
            {
                if (res.size() < n)
                {
                    len += 2;
                    s = "";
                    break;
                }
                else
                    break;
            }
            s[i] = '8';
        }
    }
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << ' ';
    cout << '\n';
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