//#include <bits/stdc++.h>
//using namespace std;
//#define ll long long
//ll a[10] = {0}, p[10], dem;
//void Kiemtra(ll i) {
//    dem++;
//    cout << "[";
//    for (ll j = 0; j <= i; j++)
//        if (j == i) cout << a[j] << "]";
//        else if (p[j] == 1) cout << a[j] << " ";
//    cout << " ";
//}
//void Try(ll i, ll k, ll c, ll n) {
//    for (ll j = 1; j >= 0; j--) {
//        p[i] = j;
//        c += a[i] * p[i];
//        if (c == k && i <= n - 1) Kiemtra(i);
//        else if (i == n - 1) return;
//        else Try(i + 1, k, c, n);
//        c -= a[i] * p[i];
//    }
//}
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        ll n, k, c = 0;
//        cin >> n >> k;
//        for (ll i = 0; i < n; i++) {
//            cin >> a[i];
//            p[i] = 0;
//        }
//        dem = -1;
//        sort(a, a + n);
//        Try (0, k, 0, n);
//        if (dem == -1) cout << dem;
//        cout << endl;
//    }
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int n, k, a[15], used[105], dem = 0;

void init(){
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		used[i] = 0;
	}
	sort(a+1, a+n+1);
	dem = -1;
}

void Print(int i){
	dem++;
	cout<<"[";
	for(int j=1; j<=i; j++){
		if(j==i)	cout<<a[j]<<"]";
		else if( used[j]==1 )cout<<a[j]<<" ";
	}
	cout<< " ";
}

void Try(int i, int sum){
	for(int j=1; j>=0; j--){
		used[i] = j;
		sum += a[i]*used[i];
		if(sum == k && i<=n)	Print(i);
		else if(i==n)return;
		else  	Try(i+1, sum);
		sum -= a[i]*used[i];
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(1, 0);
		if(dem == -1)	cout<<dem;
		cout<<'\n';
	}
	
	
	return 0;
}
