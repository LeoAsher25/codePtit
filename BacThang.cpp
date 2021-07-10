#include<bits/stdc++.h>
using namespace std;

int n, k;
long long a[100007];
long long sum, ind, mod = 1e9+7;

void init(){
	cin>>n>>k;
}

void process(){
	sum = 1;
	for(int i=1; i<=k; i++){
		a[i] = sum;
		sum = (sum + a[i]) % mod;
	}
	ind = 1;
	sum --;
	for(int i=k+1; i<=n; i++){
		a[i] = sum;
		sum -= a[ind++];
		sum = (sum + a[i]) % mod;
		if(sum < 0)	sum += mod;
	}
	cout<<a[n] <<'\n';
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		process();
	}
	return 0;
}

