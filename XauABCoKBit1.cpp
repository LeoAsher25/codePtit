#include<bits/stdc++.h>
using namespace std;


bool check(string s, int k){
	
	int Count = 0;
	for(int i=0; i<s.length();i++){
		if(s[i] == '1'){
			Count++;
		}
		if(Count > k)	return false;
	}	
	return Count == k;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;

		string s="";
		for(int i=0; i<n; i++)
			s.push_back('0');
		while(1){
			if(check(s, k))	cout<<s<<'\n';
			int i=n-1;
			while(i>=0 && s[i]=='1'){
				s[i] = '0';
				i--;
			} 
			if(i<0)	break;
			s[i] = '1';		
		}
	}
	return 0;
}

