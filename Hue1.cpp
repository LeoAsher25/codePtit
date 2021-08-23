
#include<bits/stdc++.h>
using namespace std;

int n;
int a[17], used[17] = {0};
vector<int> res;

bool cmp(int x, int y){
	return x>y;
}

void init(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n, cmp);
	for(int i=0; i<n; i++){
		cout<<a[i]<<' ';
	}
	cout<<"\n";
}


void print(){
	for(int i=res.size()-1; i>=0; i--){
		cout<<res[i]<<" ";
	}
	cout<<'\n';
}

long long sum = 0;
void Try(int i){
	
	for(int j=0; j<=1; j++){

		used[i] = j;
		sum += (a[i] * used[i]);
		if(used[i])	res.push_back(a[i]);

		if(i==n-1){
			if(sum % 2 == 1){
				print();	
			}
		}
		else if(sum % 2 == 1){
			print();
		}
		else Try(i+1);
		sum -= (a[i] * used[i]);
		if(used[i])	res.erase(res.end()-1, res.end());
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(0);
	}
	return 0;
}

