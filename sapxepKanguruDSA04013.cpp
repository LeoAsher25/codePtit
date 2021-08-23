#include<bits/stdc++.h>
using namespace std;

int n, a[100007];

void init(){
    cin>>n;
    for(int i=0; i<n; i++)  cin>>a[i];
}

void pr(){
    sort(a, a+n);
    int i=n-1, j=n/2-1;
    int Count = n;
    while(j>=0 && i>=n/2){
        if(a[i]>=2*a[j]){
            Count -= 1;
            i--; j--;
        }
        else j--;
    }
    cout<<Count<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        pr();
    }
    return 0;
}