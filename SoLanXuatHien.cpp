#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1007];

void init(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	
}

int BS(int l, int r, int value){
	int mid=0;
	while(l <= r){
		mid = (l+r)/2;
		if(a[mid] == value) return mid;
		else if(a[mid] < value) r = mid-1;
		else l = mid + 1;
	}
	
	return -1;
}

void process(){
	int ind = BS(0, n-1, k);
	if(ind == -1){
		cout<<-1<<"\n";
		return;
	}
	else{
		int l = ind, r= ind;
		while(a[l-1] == k && l-1 >= 0)	l--;
		while(a[r+1] == k && r+1 < n) 	r++;
		cout<<r-l+1<<'\n';
	}
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

