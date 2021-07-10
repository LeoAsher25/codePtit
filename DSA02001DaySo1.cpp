#include<bits/stdc++.h>
using namespace std;

int n, len;

void Print(int len, int a[]){
	for(int i=0; i<len; i++){
		if(i==0) cout<<"[";
		cout<<a[i];
		if(i==len-1) cout<<"] ";
		else cout<<" ";
	}
	
}

void init(int a[]){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
}

void process(int len, int a[]){
	int b[15];
	for(int i=0; i<len-1; i++){
		b[i] = a[i] + a[i+1];
	}
	len--;
	if(len>=1) process(len, b);
	len++;
	Print(len, a);
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int a[15];
		init(a);
		process(n, a);
		cout<<'\n';
	}

	return 0;
}

