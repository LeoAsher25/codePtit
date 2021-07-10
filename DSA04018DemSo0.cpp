#include<bits/stdc++.h>
using namespace std;

int n, a[10005];

long long BS(int l, int r){
	int mid;
	int count = 0;
	while(l<=r && l<n && r>=0){
		mid = (l+r)/2;
		if(a[mid] == 0){
			count += (mid - l) + 1;
			l = mid+1; 
		}
		else{
			r = mid - 1;
		}
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<BS(0, n-1)<<'\n';
		
		
	}

	return 0;
}

