#include<bits/stdc++.h>
using namespace std;

int n, a[1000007];

void pr(){
    cin>>n;
    for(int i=0; i<n; i++)  cin>>a[i];
    sort(a, a+n);
    int l=0, r=n-1;
    while(l<r){
        cout<<a[r--]<<' '<<a[l++]<<' ';
    }
    if(l==r)    cout<<a[l];
    cout<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        pr();
    }
    return 0;
}