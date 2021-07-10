#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;

int a[107];
int n;
int len;

void init(){
    cin>>n;
    len=1;
    a[len]=n;
    res.clear();
}

void print(){
    cout<<res.size()<<'\n';
    for(int i=0; i<res.size(); i++){
        cout<<'(';
        for(int j=0; j<res[i].size(); j++){
            if(j==res[i].size()-1){
                cout<<res[i][j]<<") ";
            }
            else {
                cout<<res[i][j]<<' ';
            }
        }
        // for(auto j:res[i]){
        //     cout<<j<<' ';
        // }
        // cout<<'\n';
    }
    cout<<'\n';
}

void addToRes(){
    vector<int> v;
    for(int i=1; i<=len; i++){
        v.push_back(a[i]);
    }
    res.push_back(v);
}

void process(int i){

    if(i==0)    return;

    addToRes();
    while(i>=1 && a[i]==1){
        i--;
    }
    if(i==0)    return;    
    int sum = len-i+1;
    len = i;
    a[i]--;
    for(int j=i+1; j<=i+sum/a[i];j++){
        a[j] = a[i];
    }
    len += sum/a[i];
    if(sum%a[i] != 0){
        a[++len] = sum%a[i];
    }
    process(len);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        process(1);
        print();
    }
    return 0;
}