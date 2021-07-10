#include<bits/stdc++.h>
using namespace std;

long long const mod = 1000000007;

long long Pow(long long n, long long k){
	if(k==0)	return 1;
	if(k==1)	return n%mod;
	long long tmp = (Pow(n, k/2)) % mod;
	if(k%2==0){
		return (tmp*tmp)%mod;
	}
	else{
		return (((tmp*tmp)%mod)*n)%mod;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		long long k;
		cin>>n>>k;
		cout<<Pow(n, k)<<'\n';
	}
	return 0;
}
