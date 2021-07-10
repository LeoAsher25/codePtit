#include<bits/stdc++.h>
using namespace std;

long long a[107][107] = {0}, Count = 0;

void Try(int i, int j, int m, int n) {
    if (i + 1 < m) {
        if (i + 1 == m - 1 && j == n - 1) 	Count++;
        else 	Try(i + 1, j, m, n);
    }
    if (j + 1 < n) {
        if (i == m - 1 && j + 1 == n - 1) 	Count++;
        else Try(i, j + 1, m, n); 
    }

}

int main(){
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        
        Count = 0;
        Try(0, 0, m, n);
        if (m == 1 && n == 1) cout << 0;
        else cout << Count;
        cout << endl;
    }
	return 0;
}

