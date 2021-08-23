#include<bits/stdc++.h>
using namespace std;

long long toHso10(string s){
    long long tmp = 0;
    for(int i=0; i<s.length(); i++){
        tmp = tmp * 2 + (s[i] - '0');
    }
    return tmp;
}

void pr(string s1, string s2){
    long long sum = 0;
    sum += (toHso10(s1) * toHso10(s2));
    cout<<sum<<'\n';
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        pr(s1, s2);
    }

    return 0;
}