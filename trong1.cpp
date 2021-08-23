#include<bits/stdc++.h>
using namespace std;

bool thuanNghich(int n){
    int m = 0, tmp = n;
    while(n > 0){
        m = m*10 + n%10;
        n/=10;
    }
    return m == tmp;
}

int isPrime[1000007] = {0};

void snt(){
    memset(isPrime, 1, sizeof isPrime);
    isPrime[0] = 0; isPrime[1] = 0;
    for(int i=2; i<1000007; i++){
        if(isPrime[i]){
            for(int j = i*2; j<1000007; j+=i){
                isPrime[j] = 0;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    snt();
    while(t--){
        int l, r;
        cin>>l>>r;
        for(int i=l; i<=r; i++){
            if(thuanNghich(i) && isPrime[i]){
                cout<<i<<' ';
            }
        }
        cout<<'\n';
    }

    return 0;
}