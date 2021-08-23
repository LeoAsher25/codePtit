#include<bits/stdc++.h>
using namespace std;

int n;
int a[1007], b[1007];

void init(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
}

void pr(){
    init();
    sort(b, b+n);
    int Count = 0;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            for(int j=i+1; j<n; j++){
                if(a[j] == b[i]){
                    Count++;
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
    }
    cout<<Count<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        pr();
    }

    return 0;
}