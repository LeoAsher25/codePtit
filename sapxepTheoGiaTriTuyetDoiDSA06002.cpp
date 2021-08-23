#include<bits/stdc++.h>
using namespace std;

int n, x;

struct num{
    int value, index;
};

bool cmp(num a, num b){
    return (abs(a.value-x) < abs(b.value-x)) || (abs(a.value-x) == abs(b.value-x) && a.index<b.index);
}

void pr(){
    cin>>n>>x;
    num a[n+7];
    for(int i=0; i<n; i++){
        cin>>a[i].value;
        a[i].index = i;
    }
    
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++)  cout<<a[i].value<<' ';
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