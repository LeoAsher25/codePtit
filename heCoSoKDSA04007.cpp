#include<bits/stdc++.h>
using namespace std;

int k;

long long toHS10(string s){
    long long tmp = 0;
    for(int i=0; i<s.length(); i++){
        tmp = tmp * k + (s[i] - '0');
    }
    return tmp;
}

string toHsK(long long n){
    string s;
    while(n > 0){
        s.insert(s.begin(), 1, (n%k) + '0');
        n /= k;
    }
    return s;

}

void pr(){
    int t;
    cin>>t;
    while(t--){
        long long sum = 0;
        string a, b;
        cin>>k>>a>>b;
        sum = toHS10(a) + toHS10(b);
        cout<<toHsK(sum)<<'\n';
    }
}

int main(){
    pr();
    return 0;
}