#include<bits/stdc++.h>
using namespace std;

int n, m, k, a[1000007], b[1000007];

void init(){
    cin>>m>>n>>k;
    for(int i=0; i<m+n; i++)  cin>>a[i];
    sort(a, a+m+n);
    cout<<a[k-1]<<'\n';
    // for(int i=0; i<n; i++)  cin>>b[i];
}


int main(){
    int t;
    cin>>t;
    while(t--){
        init();
    }
    return 0;
}