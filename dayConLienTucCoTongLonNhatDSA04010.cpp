#include<bits/stdc++.h>
using namespace std;

int n, a[107], maz[107];

void init(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        maz[i] = 0;
    }
}

void process(){
    init();
    maz[0] = a[0];
    for(int i=1; i<n; i++){
        maz[i] = max(maz[i-1] + a[i], a[i]);
    }
    int maxSum = maz[0];
    for(int i=0; i<n; i++){
        maxSum = max(maxSum, maz[i]);
    }
    cout<<maxSum<<'\n';
}

int main(){ 
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return 0;
}