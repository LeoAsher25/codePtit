#include<bits/stdc++.h>
using namespace std;



void process(){
	int n;
	string s1, s2;
	vector<string> vt1, vt2;	
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++){
		string tmp;
		cin>>tmp;
		vt1.push_back(tmp);
	}
	for(int i=0; i<n-1; i++){
		string tmp;
		cin>>tmp;
		vt2.push_back(tmp);
	}
	vt2.push_back("0");	
	for(int i=0; i<n; i++){
		if(vt1[i] != vt2[i]){
			cout<<i+1<<'\n';
			return;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		process();
	}
	return 0;
}

