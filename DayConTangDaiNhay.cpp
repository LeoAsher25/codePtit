#include<bits/stdc++.h>
using namespace std;

int n;
int a[1007], l[1007];

void init(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		l[i] = 0;
	}
}

void pr(){
	init();
	int res = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[j] < a[i]){
				l[i] = max(l[i], l[j]);
			}
		}
		l[i]+=1;
		res = max(l[i], res);
	}
	cout<<res<<"\n";
	// for(int i=0; i<n; i++)	cout<<l[i]<<' ';
	
}

int main(){
	pr();

	return 0;
}