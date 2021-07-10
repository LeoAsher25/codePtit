#include<bits/stdc++.h>
using namespace std;

int n;

void Gen(){
	int num = pow(2, n);
	string s[num+1];
	s[1] = "0";
	s[2] = "1";
	if(n!=1){
		int k = 2;
		while(k <= num/2){
			for(int i=1; i<=k; i++){
				s[2*k-i+1] = "1" + s[i];
				s[i] = "0" + s[i];
				
			}
			k = 2*k;
			
		}
		
	} 
	for(int i=1; i<= num; i++){
		cout<<s[i]<<' ';
	}
	cout<<'\n';
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Gen();
	}
	return 0;
}

