#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int a[23] = {0}, f[23] = {0};
vector<int> res;
int Count=0, sum = 0;

void print(){
	for(int i=0; i<res.size(); i++)	cout<<res[i]<<' ';
	cout<<'\n';
}

void init(){
	cin>>n>>k>>s;
	for(int i=0; i<=n; i++){
		a[i]=0;
		f[i]=0;
	}
	Count = 0;
	sum = 0;
}

void Gen(int i, int ind){
	if(i==k+1){
		if(sum==s){
			Count++;
		}	
		return;		
	}
	for(int j=ind; j<=n; j++){
		if(f[j] == 0){
			a[i] = j;
			f[j] = 1;
			sum += j;
			
			Gen(i+1, a[i]);
			
			sum -= j;
			f[j] = 0;
			
		}
	}
}


int main(){
	while(1){
		init();
			if(n==0 && k==0 && s==0) 	break;
		Gen(1, 1);
		cout<<Count<<'\n';
	}
	return 0;
}

