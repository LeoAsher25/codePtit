#include<bits/stdc++.h>
using namespace std;

long long process(){
    int n;
    cin>>n;
    int a[n+7], b[n+7];
    for(int i=0; i<n; i++)  cin>>a[i];
    for(int i=0; i<n; i++)  cin>>b[i];
    sort(a, a+n);
    sort(b, b+n);
    long long sum = 0;
    for(int i=0; i<n; i++){
        sum += (a[i]*b[n-i-1]);
    }
    return sum;
}

int main(){ 
    int t;
    cin>>t;
    while(t--){
        cout<<process()<<'\n';
    }
    return 0;
}