#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int t1=1; t1<=t; t1++){
        int n;
        cin>>n;
        int a[n+7];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int f[1007] = {0};
        int maz = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(a[i] > a[j]){
                    f[i] = max(f[j], f[i]);
                }
            }
            f[i]++;
            maz = max(f[i], maz);
        }
        cout<<"Test "<<t1<<": "<<maz<<'\n';
    }
    return 0;
}