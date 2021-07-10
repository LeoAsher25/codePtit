#include<bits/stdc++.h>
using namespace std;
vector<char> vt;
int n;
string s;


void init(){
    cin>>n;
    cin.ignore();
    cin>>s;
    sort(s.begin(), s.begin() + s.length());
}

void Try(int k, string s1){
    for(int i=k; i<s.length(); i++){
        s1.push_back(s[i]);
        cout<<s1<<' ';
        if(i==s.length()-1) return;
        else Try(i+1, s1);
        s1.erase(s1.begin() + s1.length()-1, s1.begin() + s1.length());
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        Try(0, "");
        cout<<'\n';
    }
    return 0;
}