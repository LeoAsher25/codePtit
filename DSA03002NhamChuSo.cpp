
#include<bits/stdc++.h>
using namespace std;

void equal(string &s1, string &s2){
	if(s1.length() < s2.length())	{
		s1.insert(0, s2.length()-s1.length(), '0');
	}
	else{
		s2.insert(0, s1.length()-s2.length(), '0');		
	}
}

int toNum(char x){
	return x - '0';
}

char toChar(int n){
	return n + '0';
}

string sum(string a, string b){
	
	int len = a.length();
	int tmp = 0;
	string s = "";
	for(int i=len-1; i>=0; i--){
		tmp = toNum(a[i]) + toNum(b[i]) + tmp;
		s.insert(0, 1, toChar(tmp%10));
		tmp /= 10;
	}
	if(tmp > 0){
		s.insert(0, 1, toChar(tmp));
	}
	return s;
}

void sumMax(string a, string b){
	for(int i=0; i<a.length(); i++){
		if(a[i] == '6')	a[i] = '5';
		if(b[i] == '6')	b[i] = '5';
	}
	cout<<sum(a, b)<<' ';	
}

void sumMin(string a, string b){
	for(int i=0; i<a.length(); i++){
		if(a[i] == '5')	a[i] = '6';
		if(b[i] == '5')	b[i] = '6';
	}
	cout<<sum(a, b)<<'\n';	
}


int main(){
	string a, b;
	cin>>a>>b;
	equal(a, b);
	sumMax(a, b);
	sumMin(a, b);

	
	return 0;
}
