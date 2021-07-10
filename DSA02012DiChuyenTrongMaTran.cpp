#include<bits/stdc++.h>
using namespace std;


int m, n, a[105][105];
int Count = 0;


void init(){
	cin>>m>>n;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			cin>>a[i][j];
//	res.clear();
	Count = 0;
}

void Try(int i, int j){
	if(i==m && j==n){
		Count++;
		return;
	}
	if(i+1 <= m){
		Try(i+1, j);
	}
	if(j+1 <= n){
		Try(i, j+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		init();
		Try(1, 1);
		cout<<Count<<'\n';
	}

	return 0;
}

