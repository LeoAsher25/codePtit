#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k,b;
	cin>>n>>k>>b;
	long long  dp[b+1],a[n+1];
	for(long long i=1;i<=n;i++){
		a[i]=1;
	}
	for(long long i=1;i<=b;i++){
		cin>>dp[i];
		a[dp[i]]=0;
	}
	long long res=n;
	for(long long i=1;i<=n-k;i++){
		long long dem=0;
		for(long long j=i;j<i+k;j++){
			if(a[j]==0) dem++;
		}
		res=min(res,dem);
	}
	cout<<res;
	
}
