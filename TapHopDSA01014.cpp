#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int a[23] = {0};
int Count;

void init(){
	cin>>n>>k>>s;
	for(int i=0; i<=k; i++)	a[i] = i;
	Count = 0;
}


void check(int sum){
	for(int i=1; i<=k; i++){
		sum += a[i];
		if(a[i] > s)	return;
	}
	if(sum == s)	Count++;
}

void Gen(int sum){
	while(1){
		check(sum);
		if(a[1] > s/3)	return;
		int i = k;
		while(i>0 && a[i]==n-k+i) i--;
		if(i <= 0)	return;
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j] = a[j-1] + 1;
		}		
	}
}

int main(){
	while(1){
		init();
		if(n==0 && k==0 && s==0)	break;
		Gen(0);
		cout<<Count<<'\n';
	}
	return 0;
}

