#include<bits/stdc++.h>
using namespace std;
string s;

void init(){
	cin>>s;
}

void Try(string s1){
	cout<<s1<<' ';
	int ind = -1;
	for(int i=s1.length()-2; i>=0; i--){
		if(s1[i] < s1[i+1]){
			ind = i;
			break;
		}
	}
	if(ind == -1)	return;
	for(int i=s1.length()-1; i>ind; i--){
		if(s1[i] > s1[ind]){
			swap(s1[i], s1[ind]);
			break;
		}
	}
	int l=ind+1, r=s1.length()-1;
	while(l<=r){
		swap(s1[l], s1[r]);
		l++;
		r--;
	}
	Try(s1);
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		Try(s);
		cout<<'\n';
	}

	return 0;
}

