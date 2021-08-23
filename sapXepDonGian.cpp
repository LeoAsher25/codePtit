#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int f[100007] = {0}; // f[i] số lượng phần tử không cần đổi vị trí tính đến vị trí i
    int x;
    int res = 0;
    for(int i=1; i<=n; i++){   
        cin>>x;
        f[x] = f[x-1] + 1;
        res = max(res, f[x]);
    }
    cout<<n-res<<'\n';
    return 0;
}