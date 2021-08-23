#include<bits/stdc++.h>
using namespace std;

int n, m;
int x[100007], y[100007];

void init(){
    cin>>n>>m;
    for(int i=0; i<n; i++)  cin>>x[i];
    for(int i=0; i<m; i++)  cin>>y[i];
}

void pr(){
    init();
    sort(x, x+n);
    sort(y, y+m);
    long long Count = 0;
    for(int i=0; i<n; i++){
        int j=0;
        int dem = 0;
        while(j<m && pow(x[i], y[j]) > pow(y[j], x[i])) j++;
        while(j<m && pow(x[i], y[j]) <= pow(y[j], x[i])){
            j++;
            dem++;
            // cout<<x[i]<<' '<<y[j]<<'\n';
        }
        Count+=(m-dem);
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