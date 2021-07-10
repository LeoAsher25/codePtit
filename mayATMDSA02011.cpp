#include<bits/stdc++.h>
using namespace std;

int n, s;
long long a[31];
int f[31] = {0};
//int Count = 0;
int minz = 31;

void init(){
	cin>>n>>s;
	for(int i=0; i<n; i++){
		cin>>a[i];
		f[i] = 0;
	}
	minz = 31;
//	Count = 0;
}

void Try(int i, long long sum, int Count, int ind){

	if(sum == s){ 

		if(Count < minz) {
			minz = Count;
			Count = 0;
		}
		return;
	}
	for(int j=ind; j<n; j++){
		if(f[j] == 0){
			sum += a[j];
			Count++;
			f[j] = 1;
			if(i<n)	Try(i+1, sum, Count, j+1);
			f[j] = 0;
			sum -= a[j];
			Count--;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(0, 0, 0, 0);
		cout<<minz<<'\n';
	}
	return 0;
}

