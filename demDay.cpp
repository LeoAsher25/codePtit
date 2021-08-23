// #include <bits/stdc++.h>

// using namespace std;
// #define ll long long

// ll Tinh(ll n, ll k) {
//     if (k == 1) return n;
//     else {
//         ll tmp = Tinh(n, k / 2) % 123456789;
//         if (k % 2 == 0) return (tmp * tmp) % 123456789;
//         else return (((tmp * tmp) % 123456789) * n) % 123456789;
//     }
// }

// int main() {
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         cout << Tinh(2 , n - 1);
//         cout << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const long long mod = 123456789;

long long process(long long n){
    if(n==1)    return 2;
    else{
        long long tmp = process(n/2) % mod;
        if(n%2 == 0)    return (tmp*tmp) % mod;
        else return (((tmp*tmp) % mod) * 2) % mod;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<process(n-1)<<'\n';
    }
    return 0;
}