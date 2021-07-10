#include<bits/stdc++.h>
using namespace std;

int BS(vector<int> a, int l, int r, int val){
	int mid;
	while(l <= r){
		mid = (l+r)/2;
		if(a[mid] == val)	return mid;
		else if(a[mid] < val)	l = mid+1;
		else r = mid-1;
	}
	if(a[mid] > val) 	return mid-1;
	return mid;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a;
		int x;
		for(int i=1; i<=n; i++){
			cin>>x;
			a.push_back(x);
		}
		int count=0;
		sort(a.begin(), a.end());
	
		while(1){
			int k=a.size()-1;
			if(k <= 0){
				count += a.size();
				break;
			}
			int index = BS(a, 0, k-1, a[k]/2);
			cout<<"\nindex="<<index<<':';
			for(int i=0; i<a.size(); i++){
				cout<<a[i]<<' ';
			}
			if(index >= 0){
				a.erase(a.end()-1, a.end());
				a.erase(a.begin()+index, a.begin()+index+1);
				count+=1;
			}
			else{
				count+=a.size();
				break;
			}
		}
		cout<<'\n'<<count<<'\n';
	}
	return 0;
}


/*
2 2 4 5 6 7 8 9

1 2 3 5 6 6 8 9

1 1 2 2 3 7 8 9
1 1 2 2 7 8
1 1 2 7
*/
