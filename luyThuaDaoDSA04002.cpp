#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long Reverse(long long n){
    long long tmp = 0;
    while(n > 0){
        tmp = tmp*10 + n%10;
        n /= 10;
    }
    return tmp;
}

long long LT(long long n, long long k){
    if(n==1)    return 1;
    if(k==1)    return n % mod;
    long long tmp = LT(n, k/2) % mod;
    if(k%2 == 0)    return (tmp*tmp) % mod;
    else return (((tmp*tmp) % mod) * n ) % mod;
}

void process(){
    long long n;
    cin>>n;
    cout<<LT(n, Reverse(n))<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return 0;
}