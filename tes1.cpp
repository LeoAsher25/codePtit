#include<bits/stdc++.h>
using namespace std;

int n, k, b;
vector<int> save;
int L[100007] = {0}, R[100007] = {0};
int f[100007] = {0}; 
int a[100007];
void init(){
	cin>>n>>k>>b;
	save.push_back(0);
	for(int i=0; i<b; i++){
		cin>>a[i];
		f[a[i]]++;
		save.push_back(a[i]);
	}
	save.push_back(10);
	sort(a, a+n);
	sort(save.begin(), save.end());
	
	for(int i=0; i<save.size(); i++){
		cout<<save[i]<<" ";
	}
}

void process(){
	for(int i=0; i<b; i++){
		L[i] = a[i] - save[a[i] - 1]
	}
}

int main(){
	init();
	return 0;
}

