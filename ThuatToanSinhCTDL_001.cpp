#include<bits/stdc++.h>
using namespace std;

bool checkReserve(string n){
	int len = n.length();
	for(int i=0; i<len; i++){
		if(n[i] != n[len-i-1])
			return false;
	}
	return true;
}

void print(string s){
	for(int i=0; i<s.length(); i++)
		cout<<s[i] <<' ';
	cout<<'\n';
}

void Process(int n){
	string s="";
	for(int i=0; i<n; i++)
		s.push_back('0');
	while(1){
		if(checkReserve(s)){
			print(s);
		}
		int i=n-1;
		while(i >= 0 && s[i]=='1'){
			s[i] = '0';
			i--;
		}
		if(i < 0)	return;
		s[i] = '1';
	}
}

int main(){
	int t;
	cin>>t;
	Process(t);
	
	return 0;
}

