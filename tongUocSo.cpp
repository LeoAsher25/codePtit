#include<bits/stdc++.h>
using namespace std;

vector<int> res;

long long xl(int x, long long sum){
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            while(x%i==0){
                res.push_back(i);
                sum += i;
                x /= i;
            }
        }
    }
    if(x > 1){
        sum += x;
        res.push_back(x);
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int x;
    long long sum = 0;
    for(int i=0; i<n; i++){
        cin>>x;
        sum += xl(x, 0);
    }
    cout<<sum<<'\n';
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<' ';
    }
    cout<<'\n';
    return 0;   
}