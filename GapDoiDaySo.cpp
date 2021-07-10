#include<bits/stdc++.h>
using namespace std;

long long Process(long long n, long long k) {
    if (k == pow(2, n) - 1 || k == 1) return 1;
    long long tmp = pow(2, n - 1);
    if (k == tmp) return n;
    if (k < tmp) return Process(n - 1, k);
    return Process(n - 1, k - tmp);
    
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        cout << Process(n , k);
        cout << endl;
    }
    return 0;
}

