#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+7];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		int ind = 0;
		for(int i=1; i<n; i++){
			if(a[i] > a[0]){
				ind = i;
				break;
			}
		}
		if(ind == 0)	cout<<"-1"<<'\n';
		else cout<<a[0]<<' '<<a[ind]<<'\n';
	}
	return 0;
}

