#include<bits/stdc++.h>
using namespace std;

int a[15][15], n, k;
int Count = 0;
int r[15] = {0}, c[15] = {0}, s[15] = {0};
vector<string> res;
int sum = 0;

void init(){
	cin>>n>>k;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			cin>>a[i][j];
	Count = 0;
}

bool check(){
	for(int i=1; i<=n; i++){
		if(s[i] == 0)	return false;
	}
	return true;
}

void process(int i){
	if(check()){
		if(sum == k){
			Count++;
			string tmp = "";
			int Stmp = 0;
			for(int m=1; m<=n; m++){
				tmp.push_back(s[m] + '0');
			}
			res.push_back(tmp);			
		}
		return;
	}
	for(int j=1; j<=n; j++){
		if(c[j] == 0){
			c[j] = 1;	
			s[i] = j;		
			sum += a[i][j];
			process(i+1);
			sum -= a[i][j];
			s[i] = 0;
			c[j] = 0;
		}				
	}
		
}

int main(){
	init();
	process(1);
	cout<<Count<<'\n';
	for(int i=0; i<res.size(); i++){
		for(int j=0; j<res[i].size(); j++){
			cout<<res[i][j] << ' ';
		}
		cout<<'\n';
	}
	return 0;
}

