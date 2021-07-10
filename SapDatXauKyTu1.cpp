#include <bits/stdc++.h>

using namespace std;

long long Tinh(long long n, long long k) {
    if (k == 1) return n;
    else {
        long long tmp = Tinh(n, k / 2) % 123456789;
        if (k % 2 == 0) 
			return (tmp * tmp) % 123456789;
        else 
			return (((tmp * tmp) % 123456789) * n) % 123456789;
    }
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << Tinh(2 , n - 1)<<'\n';
    }
    return 0;
}
