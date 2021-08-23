#include<bits/stdc++.h> 
using namespace std;

int n, k, a[1000007];


void init(){
    cin>>n>>k;
    for(int i=0; i<n; i++)  cin>>a[i];
}

int BS(int l, int r, int val){
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(a[mid] == val)   return mid+1;
        else if(a[mid] < val) l = mid+1;
        else r = mid-1;
    }
    return -1;
}

void pr(){
    init();
    BS(0, n, k) >= 0 ? cout<<BS(0, n, k) : cout<<"NO";
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