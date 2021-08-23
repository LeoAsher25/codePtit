#include<bits/stdc++.h>
using namespace std;

bool isPrime[10];

bool thuanNghich(string s){
    int n1=0, n2=s.length()-1;
    while(n1<n2){
        if(s[n1] != s[n2])    
            return false;
        n1++;
        n2--;
    }
    return true;
}

void Check(string s){
    bool check = true;
    if(thuanNghich(s) == false) check = false;
    for(int i=0; i<s.length(); i++){
        if(isPrime[s[i]-'0'])   continue;
        else {
            check = false;
            break;
        }
    }
    check ? cout<<"YES\n" : cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<10; i++) isPrime[i] = false;
    isPrime[2] = true;
    isPrime[3] = true;
    isPrime[5] = true;
    isPrime[7] = true;
    cin.ignore();
    while(t--){
        string s;
        getline(cin ,s);
        xl(s);
    }
    return 0;
}