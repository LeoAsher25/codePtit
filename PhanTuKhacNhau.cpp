#include<bits/stdc++.h>
using namespace std;

int n;
string s1, s2;
vector<string> vt1, vt2;

void init(){
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
}
void process(){
	int l=0, r=n-1, res = 0;
	while(l <= r){
		int mid = (l+r)/2;
		if(vt1[mid] == vt2[mid]){
			res = mid;
			l= mid+1;
		}
		else{
			r = mid-1;
		}
	}
	cout<<res+2<<'\n';	
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

