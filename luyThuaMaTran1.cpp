#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int n;
long long k;
long long a[11][11], b[11][11];

void Lt2(long long x[11][11], long long y[11][11]){
    long long res[11][11];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            long long tmp = 0;
            for(int i1 = 0; i1<n; i1++){
                tmp = (tmp + (x[i][i1] * y[i1][j]) % mod) % mod;
            }
            res[i][j] = tmp;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j] = res[i][j];
        }
    }    
}


void init(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }
    }
}

void Pow(long long k1){
    if(k1<=1)    return;
    Pow(k1/2);
    Lt2(a, a);
    if(k1%2 == 1) Lt2(a, b);
}

void pr(){
    init();
    Pow(k);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        pr();
    }

    return 0;
}