#include<bits/stdc++.h>
using namespace std;


int process(int n, long long k){
	if(k==1 || k == pow(2, n) - 1)	return 1;
	long long ind = (int)pow(2, n-1);
	if(k == ind)	return n;
	else if(k < ind)	return process(n-1, k);
	else return process(n-1, k-ind);	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin >>n >> k;
		cout<<process(n, k)<<'\n';
	}
	return 0;
}

/*

1 2 1 3 1 2 1

*/
