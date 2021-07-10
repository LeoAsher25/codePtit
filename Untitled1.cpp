#include<bits/stdc++.h>
using namespace std;

void process(int n){
	
	string a = "ABCDEFGHIK";
	string s1 = "", s2 = "";
	for(int i=0; i<n; i++){
		s1.push_back(a[i]);
		s2.push_back('1');
	}
	string str = "";
	while(1){
		while(1){
			str = s1+s2;
			cout<<str<<'\n';
			int k=n-1;
			while(k>=0 && s2[k]=='2'){
				s2[k] = '1';
				k--;
			}
			if(k<0)	break;
			s2[k] = '2';

		}
		int ind = -1;
		for(int i=n-2; i>=0; i--){
			
			if(s1[i] < s1[i+1]){
				ind = i;
				break;
			}
		}
		
		if(ind == -1)	break;
		for(int i=n-1; i>= ind; i--){
			if(s1[i] > s1[ind]){
				swap(s1[i], s1[ind]);
				break;
			}
		}
		int l=ind+1, r=n-1;
		while(l<=r){
			swap(s1[l], s1[r]);
			l++;r--;
		}
	}
}


int main(){
	int n;
	cin>>n;
	process(n);
	return 0;
}
