#include<bits/stdc++.h>
using namespace std;

struct ps{
	int ts, ms;
};

void Print(ps a){
	cout<< a.ts <<"/" << a.ms <<' ';
}

ps RutGon(ps a){
	if(a.ms % a.ts == 0){
		a.ts = 1;
		a.ms = a.ms/a.ts;
	}
	return a;
}

ps Minus(ps a, ps b){  //tru 2 ps vaf rut gon ket qua
	ps m;
	if(a.ms == b.ms){ //neu mau bang nhau,tru tu so
		m.ts = b.ts - a.ts;
		m.ms = a.ms;
		return m;
	}
	
	// quy dong mau
	int ms1 = a.ms; 
	int ms2 = b.ms;
	a.ts *= ms2;
	a.ms *= ms2;
	b.ts *= ms1;
	b.ms *= ms1;
	//tru
	m.ts = b.ts-a.ts;
	m.ms = ms1*ms2;
	return RutGon(m);
}

void Process(ps a){
	if(a.ts == 1){ // neu tu bang 1, ket thuc
		Print(a);
		cout<<'\n';
		return;
	}
	
	ps tmp;
	tmp.ts = 1;
	tmp.ms = (a.ms/a.ts) + 1;
	Print(tmp);
	a = Minus(tmp, a);
	Process(a);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ps a;
		cin>>a.ts>>a.ms;
		Process(RutGon(a));
//		cout<<'\n';
	}


	return 0;
}

