#include<bits/stdc++.h>
using namespace std;

int ind=0;
int Stack[2003] = {0};

void push(int x){
	Stack[ind++] = x;
}

void pop(){
	Stack[ind--] = 0;
}

void show(){
	for(int i=0; i<ind; i++){
		cout<<Stack[i]<<' ';
	}
	cout<<'\n';
}

int main(){
	string s;
	while(cin>>s){
		if(s=="push"){
			int x;
			cin>>x;
			cin.ignore();
			push(x);
		}
		else if(s=="show"){
			show();
		}
		else if(s=="pop"){
			pop();
		}
		if(ind == 0){
			cout<<"empty\n";
			break;
		}
	}
	return 0;
}

