#include<bits/stdc++.h>
using namespace std;

int n, a[1007];
long long sum = 0, Count = 0;
long long f[1007] = {0};
bool check;

void init(){
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        sum += a[i];
        f[i] = 0;
    }
    Count = 0;
    check = false;
}

long long s = 0;


void process(int k){
    if(s == sum-s){
        check = true;
        return;
    }
    for(int i=0; i<0; i++){
        if(f[i] == 1){
            s += a[i];
            f[i] = 1;
            if(k+1 < n) process(k+1);
            f[i] = 0;
            s-= a[i];
        }
    }
    if(check == false ) cout<<"NO\n";
    else if(check == true ) cout<<"YES\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        process(0);
    }
}