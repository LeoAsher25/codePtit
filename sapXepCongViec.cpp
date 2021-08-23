#include<bits/stdc++.h>
using namespace std;

struct timer{
    int start, end;
};

bool cmp(timer a, timer b){
    return b.end > a.end;
}


void process(){
    int n;
    cin>>n;
    timer a[n+1];
    
    for(int i=0; i<n; i++){
        cin>>a[i].start;
    }
    for(int i=0; i<n; i++){
        cin>>a[i].end;
    }
    sort(a, a+n, cmp);
    // for(int i=0; i<n; i++){
    //     cout<<a[i].start<<' ';
    // }
    // cout<<'\n';
    // for(int i=0; i<n; i++){
    //     cout<<a[i].end<<' ';
    // }
    // cout<<'\n';
    int Count = 1;
    int timeEnd = a[0].end;
    for(int i=1; i<n; i++){
        if(a[i].start >= timeEnd){
            Count++;
            timeEnd = a[i].end;
        } 
    }
    cout<<Count<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process(); 
    }

    return 0;
}