#include <bits/stdc++.h>
using namespace std;
int n, a[16], b[16];

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n - 1) {
            int res = 0;
            for (int k = 0; k < n; k++)
                if (a[k]) res += b[k];
            if (res % 2 == 1) {
                for (int k = 0; k < n; k++)
                    if (a[k]) cout << b[k] << " ";
                cout << endl;
            }
        } else Try(i + 1);
    }
}
bool cmp(int a, int b) {
    return a > b;
}
int main() {    
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(b, b + n, cmp);
        Try(0);
        cout << endl;
    }
}