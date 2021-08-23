#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        int i=len-1;
        if(s[i] == '1'){
            s[i] = '0';
            cout<<s<<'\n';
        }
        else {
            s[i--] = '1';
            while(s[i]=='0' && i>=0){
                s[i--] = '1';
            }
            if(i>=0){
                s[i] = '0';
            }
            cout<<s<<'\n';
        }
    }
    return 0;
}