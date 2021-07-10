#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[41];
int f[41];

void init(){
	cin>>n>>k;
	for(int i=0; i<=40; i++){
		f[i] = 0;
	}	
	for(int i=1; i<=k; i++){
		cin>>a[i];
		f[a[i]] ++;
	}

	a[0] = 0;
}

int process(){
	int i = k;
	while(i>=1 && a[i] == n-k+i) i--;
	if(i==0)	return k;
	a[i]++;
	for(int j=i+1; j<=k; j++){
		a[j] = a[j-1] + 1;
	}
	int count = 0;
	for(int j=1; j<=k; j++){
		if(f[a[j]] == 0){
			count ++;
		}
	}
	
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		cout<<process()<<"\n";
	}

	return 0;
}

