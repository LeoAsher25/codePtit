#include<bits/stdc++.h>
using namespace std;

long long a[1000007], X;

int BS(int l, int r, long long a[], long long val){
    int mid;
    while(l <= r){
        mid = (l+r)/2;
        if(a[mid] == val)   return mid;
        else if(a[mid] < val) l = mid+1;
        else r = mid-1;
    }
    if(mid <= 1) return -1;
    if(a[mid] > val) return mid-1;
    return mid;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        
        cin>>n>>X;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        cout<<BS(1, n, a, X)<<'\n';
    }


    return 0;
}