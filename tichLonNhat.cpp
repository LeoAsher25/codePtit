#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+3];
    for(int i=0; i<n; i++)  cin>>a[i];
    sort(a, a+n);
    int maz = a[n-1] * a[n-2];
    maz = max(maz, maz * a[n-3]);
    maz = max(maz,a[0]*a[1]*a[n-1]);
    // if(maz <= a[0]*a[1]) maz = a[0]*a[1]*a[n-1];
    cout<<maz<<'\n';

    return 0;
}