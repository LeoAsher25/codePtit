#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
vector<int> vt;
int n, x, a[21];

void init(){
    cin>>n>>x;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    res.clear();
    vt.clear();
}

void print(){
    if(res.size()==0){
        cout<<"-1\n";
    }
    else{
        cout<<res.size()<<" ";
        for(int i=0; i<res.size(); i++){
            cout<<"{";
            for(int j=0; j<res[i].size(); j++){
                if(j==res[i].size()-1){
                    cout<<res[i][j]<<"} ";
                }
                else cout<<res[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}

void Try(int i, int sum){
    for(int j=i; j<n; j++){
        vt.push_back(a[j]);
        sum += a[j];
        if(sum == x){
            res.push_back(vt);
        }
        else if(sum < x){
            Try(j, sum);
        }
        sum -= a[j];
        vt.erase(vt.begin() + vt.size()-1, vt.begin() + vt.size());
    }
}




int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        Try(0, 0);
        print();
    }
    return 0;
}