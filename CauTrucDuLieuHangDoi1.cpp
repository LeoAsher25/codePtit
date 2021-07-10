#include<bits/stdc++.h>
using namespace std;

vector<int> que;
int n;


int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int query;
		que.clear();
		while(n--){
			cin>>query;
			switch(query){
				case 1:
				{
					cout<<que.size()<<'\n';
					break;					
				}
				case 2:
				{
					if(que.size()==0)	cout<<"YES\n";
					else cout<<"NO\n";
					break;
				}
				case 3:
				{
					int x;
					cin>>x;
					que.push_back(x);
					break;
				}
					
				case 4:
				{
					if(que.size() != 0)	que.erase(que.begin(), que.begin()+1);
					break;					
				}
				case 5:
				{
					if(que.size()==0)	cout<<"-1\n";
					else cout<<que[0]<<"\n";
					break;					
				}
				case 6:
				{
					if(que.size()==0)	cout<<"-1\n";
					else cout<<que[que.size()-1]<<'\n';
					break;					
				}
			}
		}
	}	
	return 0;
}

