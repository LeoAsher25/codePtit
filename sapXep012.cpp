#include<bits/stdc++.h>
using namespace std;


void pr(){    
    int n, x;
    priority_queue<int, vector<int>, greater<int>> q;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        q.push(x);
    }
    while(!q.empty()){
        cout<<q.top()<<' ';
        q.pop();
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