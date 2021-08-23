#include<bits/stdc++.h>
using namespace std;

int m, n;
long long a[100007], b[100007];
int f[100007];

void init(){
    cin>>n>>m;
    memset(f, 0, sizeof f);
    for(int i=0; i<n; i++){
        cin>>a[i];
        f[a[i]] ++;
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
        f[b[i]] ++;
    }
}

void pr(){
    init();
    vector<long long> Union, InsterSection;
    Union.clear(); InsterSection.clear();
    for(int i=0; i<n; i++){
        Union.push_back(a[i]);
    }
    for(int i=0; i<m; i++){
        if(f[b[i]] == 1)    Union.push_back(b[i]);
    }
    sort(Union.begin(), Union.end());
  
    for(int i=0; i<n; i++){
        if(f[a[i]] > 1) {
            InsterSection.push_back(a[i]);
        }
    }
    sort(InsterSection.begin(), InsterSection.end());

    for(int i=0; i<Union.size(); i++){
        cout<<Union[i]<<' ';
    }
    cout<<'\n';
    for(int i=0; i<InsterSection.size(); i++){
        cout<<InsterSection[i]<<' ';
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