#include<bits/stdc++.h>
using namespace std;

void process(int ind, int cd, string n, int k){
    if(cd == k || ind >= n.length()-1){
        cout<<n<<'\n';
        return;
    }
    char maz = n[ind];
    int ind1 = ind;
    for(int i=n.length()-1; i>=ind+1; i--){
        if(maz < n[i]){
            maz = n[i];
            ind1 = i;
        }
    }
    if(maz != n[ind]){
        cd++;
        swap(n[ind], n[ind1]);
    }
    process(ind+1, cd, n, k);
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string s;
        cin>>k;
        cin.ignore();
        cin>>s;
        process(0, 0, s, k);
    }
    return 0;
}

/*
1346436
6341436
6641433

*/