#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[10], used[10] = {0};
vector<int> res;

void init(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
}


void print(){
	for(int i=0; i<res.size(); i++){
		cout<<res[i]<<" ";
	}
	cout<<'\n';
}

int Count = 0;
long long sum = 0;
void Try(int i){
	
	for(int j=0; j<=1; j++){

		used[i] = j;
		sum += (a[i] * used[i]);
		if(used[i])	res.push_back(a[i]);

		if(i==n-1){
			if(sum == k){
				print();
				Count++;		
			}
		}
		else if(sum==k){
			print();
			Count++;
		}
		else Try(i+1);
		sum -= (a[i] * used[i]);
		if(used[i])	res.erase(res.end()-1, res.end());
	}
}


int main(){
	init();
	Try(0);
	cout<<Count<<'\n';
	return 0;
}

