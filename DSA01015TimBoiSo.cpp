#include<bits/stdc++.h>
using namespace std;

int m;

void gen(int n){
	int a[1005];
	while(1){
		for(int i=0; i<=n; i++){
			a[i] = 0;
		}
		a[1] = 9;
		while(1){
			
			// check % == 0
			long long tmp = 0;
			for(int i=1; i<=n; i++){
				tmp = tmp*10 + a[i];
			}
			if(tmp % m == 0){
				cout<<tmp<<"\n";
				return;
			}		
			
			// gen binary 	
			int i=n; 
			while(i>=2 && a[i]){
				a[i] = 0;
				i--;
			}
			if(i<=1){ 
				n++;
				break;
			}
			a[i] = 9;
		}		
	}
}

int count (int n){
	int dem = 0;
	while(n>0){
		dem++;
		n/=10;
	}
	return dem;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>m;
		gen(count(m));
	}

	return 0;
}
