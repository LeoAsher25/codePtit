#include<bits/stdc++.h>
using namespace std;

int x[10005], n, S, t[10005];

void init(){
	cin>>n>>S;		
	for(int i=0; i<n; i++){
		cin>>t[i];
	}
}

void greedy(){
	int i=0, int sum = S;
	while(i<n){
		if(t[i] <= sum){
			x[i] = 1;
			sum -= t[i];
		}
		if(sum == 0) break;
		i++;
	}
}
int main(){
	init();
	sort(t, t+n);
	greedy();
	for(int i=0; i<n; i++){
		cout<<x[i]<<' ';
	}

	return 0;
}

