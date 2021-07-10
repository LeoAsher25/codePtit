#include<bits/stdc++.h>
using namespace std;

int n, a[15][15];
vector<string> res;

void init(){
	cin>>n;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			cin>>a[i][j];
	res.clear();
}

void process(int i, int j, string s){
	if(i==n && j==n){
		res.push_back(s);
		return;
	}
	if( a[i+1][j] == 0 && a[i][j+1] == 0 ){
//		check = false;
		return;
	}
	else{
		if(i+1<=n && a[i+1][j] == 1){
			process(i+1, j, s+"D");
		}
		if(j+1<=n && a[i][j+1] == 1){
			process(i, j+1, s+"R");
		}		
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(a[1][1] == 0 || a[n][n] == 0){
			cout<<"-1\n";
			continue;
		}
		process(1, 1, "");
		if(res.size() == 0){
			cout<<"-1\n";
		}
		else{
			for(int i=0; i<res.size(); i++){
				cout<<res[i]<<' ';
			}
			cout<<'\n';
		}
//		while(check){
//			process(1, 1, "");
//		}
	}

	return 0;
}

