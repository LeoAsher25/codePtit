#include<bits/stdc++.h>
using namespace std;

stack<char> st;

void process(string s){
	int maz = 0;
	int Count = 0;
	int len = s.length();
	while(!st.empty())	st.pop();
	for(int i=0; i<len; i++){
		if(st.empty()){
			st.push(s[i]);
		}
		else{
			if(s[i] == ')' && st.top() == '('){
				st.pop();
				Count+=2;
			}
			else{
				st.push(s[i]);
			}
		}
		if(st.empty()){
			maz = max(maz, Count);
		}
	}
	cout<<maz<<'\n';
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		process(s);
	}
	return 0;
}

