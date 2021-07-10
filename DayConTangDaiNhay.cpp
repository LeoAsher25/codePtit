#include<bits/stdc++.h>
using namespace std;

int a[1007], n, ans, count = 0;
int l[1007] = {0};

void init(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
}

void process(){
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[j] < a[i]){
				l[i] = max(l[i], l[j]);
			}
		}
		l[i] ++;
		ans = max(ans, l[i]);
	}
	cout<<ans;
}

int main(){
	init();
	process();
	return 0;
}
