#include<bits/stdc++.h>
using namespace std;

int m, n;
int c[107][107], a[107], b[107];
int res[207] = {0};

void init(){
    cin>>m>>n;
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    memset(res, 0, sizeof res);
}


void pr(){
    init();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            res[i+j] += a[i]*b[j];
        }
    }
    
    for(int i=0; i<m+n-1; i++){
        cout<<res[i]<<' ';
    }
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