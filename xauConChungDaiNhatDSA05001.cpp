#include<bits/stdc++.h>
using namespace std;
int a[1007][1007] ={{}};


int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin>>s1>>s2;

        int n=s1.length(), m=s2.length();
        for(int i=0; i<=n; i++)
            for(int j=0; j<=m; j++)
                a[i][j] = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(s1[i] == s2[j])  a[i+1][j+1] = a[i][j]+1;
                else a[i+1][j+1] = max(a[i][j+1], a[i+1][j]);
            }
        }
        
        cout<<a[n][m]<<'\n';
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout<<a[i][j]<<' ';
            }
            cout<<'\n';
        }

    }
    return 0;
}