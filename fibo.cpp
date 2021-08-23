#include <bits/stdc++.h>
using namespace std;

int checkFibo(long long n){
    if(n==0 || n==1 || n==2)    return 1;
    long long n1=1, n2=1, n3; // n1 số fibo-2, n2: số fibo-1, n3: số fibo hiện tại
    while(1){
        n3 = n1+n2;  // cộng 2 số fibo ở trước để ra số fibo hiện tại
        if(n3==n)   return 1;  // check xem số fibo hiện tại có bằng n khôngg
        if(n3>n)    return 0; // nếu số fibo hiện tại mà > n nghĩa là n không phải fibo
        n2 = n3; // nếu số fibo hiện tại vẫn nhỏ hơn n thì tiếp tục cộng các số fibo
        n1 = n2;
    }
}

int main (){
	int t;
	cin >> t;
	while (t>0){
		long long n;
		cin>>n;
		// checkFibo(n) ? cout<<"YES\n" : cout<<"NO\n";
        if(checkFibo(n)) cout<<"YES\n";
        else cout<<"NO\n";
	}
}