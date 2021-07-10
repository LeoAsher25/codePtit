#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[1007];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int sum = 0;
		for(int i=0; i<n; i++){
			if(a[i] == k)	sum++;
		}
		if(sum == 0)	cout<<"-1"<<"\n";
		else cout<<sum <<"\n";
		
	}
	return 0;
}

