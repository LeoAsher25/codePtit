#include<bits/stdc++.h>
using namespace std;

long long n, k;
long long a[107][107];
long long f[107][107] = {0}, used[107] = {0};
long long sum = 0;
long long ind = 0;


void process(long long i){
	if(sum > k)	return;
	if(i==n)	return;
	for(long long j=0; j<n; j++){
		if(used[j] == 0){
			sum += a[i][j];
			f[ind][i] = j+1;
			used[j] = 1;
			if(i == n-1 && sum == k){
				ind++;
			}
			else if(i <= n){
				process(i+1);

			}	
			sum -= a[i][j];	
			used[j] = 0;
		}
	}

}


int main(){
	
	cin>>n>>k;
	for(long long i=0; i<n; i++){
		for(long long j=0; j<n; j++){
			cin>>a[i][j];
		}
	}	
	ind = 0;
	for(long long i=0; i<=107; i++){
		for(long long j=0; j<=107; j++){
			f[i][j] = 0;
		}
		used[i] = 0;
	}	
	process(0);
	cout<<ind<<'\n';
	for(long long i1 = 0; i1<ind; i1++){
		for(long long j1 = 0; j1<n; j1++){
			cout<<f[i1][j1] << ' ';
		}
		cout<<'\n';
	}	
	return 0;
}

