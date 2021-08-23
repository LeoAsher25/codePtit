#include<bits/stdc++.h>
using namespace std;

struct tmp{
    char val;
    int ind;
};

void pr(){
    string s;
    cin>>s;
    int n = s.length();
    stack<tmp> st;
    for(int i=0; i<n; i++){
        if(s[i] == ')' && st.empty() == false){
            if(st.top().val == '(') st.pop();
            else{
                tmp x;
                x.val = s[i];
                x.ind = i+1;
                st.push(x);
            }
        }
        else {
            tmp x;
            x.val = s[i];
            x.ind = i+1;
            st.push(x);            
        }
    }
    int maz = 0, Count = 0;
    vector<int> res;
    while(!st.empty()){
        // cout<<st.top().ind<<' ';
        res.push_back(st.top().ind);
        st.pop();
    }
    // cout<<'\n';
    res.push_back(0);
    res.insert(res.begin(), 1, n+1);
    for(int i=res.size()-2; i>=0; i--){
        Count = res[i] - res[i+1]-1;
        maz = max(maz, Count);
        // cout<<res[i]<<' ';
    }
    // cout<<'\n';
    cout<<maz<<'\n';
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        pr();
    }
    return 0;
}