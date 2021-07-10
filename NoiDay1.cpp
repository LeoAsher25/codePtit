#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long long value;
	cin>>t;
	while(t--){
		int n; 
		cin>>n;
		priority_queue<long long,vector<long long>,greater<long long> > que;
		for(int i=0;i<n;i++){
			cin>>value;
			que.push(value);
		}
		long long res=0;
		while(que.size()>1){
			long long s1=que.top(); que.pop();
			long long s2=que.top(); que.pop();
			que.push(s1+s2);
			res+=s1+s2;
		}
		cout<<res<<endl;
	}
}
