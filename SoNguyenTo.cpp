#include<bits/stdc++.h>
using namespace std;
bool isPrime[203];
vector<vector<int>> res;

void init(){
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i=2; i*i<203; i++)
        for(int j=i*i; j<203; j+=i)
            isPrime[j] = false;
}
 
void Try(int i, int x[], int s, int n, int sum) {
    for(int j=x[i-1]+1; j<=s-sum; j++){
        if(isPrime[j]){
            x[i] = j;
            sum += j;
            if(i == n){
                if(sum == s){
                    vector<int> v;
                    for(int k=1; k<=n; k++){
                        v.push_back(x[k]);
                    }
                    res.push_back(v);
                }
            } else Try(i+1, x, s, n, sum);
            sum -= j;
        }
    }
}

int main(){
    int t;
    cin>>t;
    init();
    while(t--){
        int n, p, s;
        cin>>n>>p>>s;
        int x[n+3];
        res.clear();
        x[0] = p;
        Try(1, x, s, n, 0);
        cout<<res.size()<<"\n";
        for(int i=0; i<res.size(); i++){
            for(auto j:res[i]) cout<<j<<' ';
            cout<<'\n';
        }
    }

    return 0;
}