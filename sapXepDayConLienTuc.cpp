#include<bits/stdc++.h>
using namespace std;

int n, a[1000007], b[1000007];

void pr(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a, a+n);
    int l=0, r=n-1;
    while(l<n && a[l] == b[l])  l++;
    while(r>=0 && a[r] == b[r]) r--;
    cout<<l+1<<' '<<r+1<<'\n';
}


int main(){
    int t;
    cin>>t;
    while(t--){
        pr();        
    }

    return 0;
}