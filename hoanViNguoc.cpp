#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> vt;


void pr(){
    cin>>n;
    vt.clear();
    string s = "";
    for(int i=n; i>=1; i--){
        s.push_back(i+'0');
    }
    while(1){
        vt.push_back(s);
        // cout<<vt[0]<<'\n';
        int ind = -1;
        for(int i=n-2; i>=0; i--){
            if(s[i] > s[i+1]){
                ind = i;
                break;
            }
        }

        if(ind < 0)   break;
        for(int i=n-1; i>ind; i--){
            if(s[i] < s[ind]){
                swap(s[i], s[ind]);
                break;
            }
        }
        int l=ind+1, r=n-1;
        while(l<=r){
            swap(s[l], s[r]);
            l++;r--;
        }
        
    }
    
    cout<<vt.size()<<'\n';
    for(int i=0; i < vt.size(); i++){
        cout<<vt[i]<<' ';
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