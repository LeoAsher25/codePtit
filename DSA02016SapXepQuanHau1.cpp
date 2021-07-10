#include<bits/stdc++.h>
using namespace std;

int xuoi[9], nguoc[9];
int used[9];
int a[10][10];
int Count = 0;
int maz = 0;

void init(){
	maz = 0;
	for(int i=1; i<=8; i++){
		for(int j=1; j<=8; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<=8; i++){
		xuoi[i] = 0;
		nguoc[i] = 0;
	}
	Count = 0;
}

void Try(int i){
	for(int j=1; j<=8; j++){
		if(used[j] == 0 && xuoi[8+j-i] == 0 && nguoc[i+j-1] == 0){
			used[j] = 1;
			xuoi[8+j-i] = 1;
			nguoc[i+j-1] = 1;
			Count += a[i][j];
			if(i==8){
				if(Count >= maz){
					maz = Count;
				}
			}
			else{
				Try(i+1);
			}
			used[j] = 0;
			xuoi[8+j-i] = 0;
			nguoc[i+j-1] = 0;	
			Count -= a[i][j];		
		}
	}
}



int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(1);
		cout<<maz<<'\n';		
	}

	return 0;
}

