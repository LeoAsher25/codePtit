#include<bits/stdc++.h>
using namespace std;

long long a[1007][1007];
long long mod = 1e9+7;


void init(int &n, int &k){
	cin>>n>>k;
}

long long ToHop(int n, int k){
	if(a[n][k])	return a[n][k];
	if(k==0 || k==n)	a[n][k] = 1;
	else if(k==1)	a[n][k] = n;
	else a[n][k] = ToHop(n-1, k-1) + ToHop(n-1, k);
	a[n][k] %= mod;
	return a[n][k];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		init(n, k);
		cout<<ToHop(n, k)<<'\n';
	}
	return 0;
}
