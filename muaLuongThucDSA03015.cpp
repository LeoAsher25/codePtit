#include<bits/stdc++.h>
using namespace std;

int n, s, m;


int Bs(int l, int r){
    int res = -1;
    while(l<=r){
        int day = (l+r)/2;
        if((day - day/7)*n >= s*m){
            res = day;
            r = day-1;
        }
        else {
            l = day+1;
        }
    }
    if(res != -1)   res -= res/7;
    return res;
}

void process(){
    cin>>n>>s>>m;
    cout<<Bs(0, s)<<'\n';
}


int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return 0;
}