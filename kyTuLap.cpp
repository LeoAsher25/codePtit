#include<bits/stdc++.h>
using namespace std;
vector<string> s;
int n;
bool used[100] ;

int minz = 1e9+7;
void init(){
    cin>>n;
    cin.ignore();
    string x;
    for(int i=0; i<n; i++)  {
        cin>>x;
        s.push_back(x);
    }
    memset(used, false, 100);
}

int check(string a, string b){
    int f[300] = {0};
    int Count = 0;
    for(int i=0; i<a.length(); i++){
        f[a[i]] ++;
    }
    for(int i=0; i<b.length(); i++){
        if(f[b[i]] != 0){
            Count++;
        }
    }
    return Count;
}
void Try(int i, string stt){
    for(char j='0'; j<=(n-1)+'0'; j++){
        if(!used[j]){
            stt.push_back(j);
            used[j] = true;
            if(i==n-1){
                int Cnt = 0;
                for(int k=1; k<n; k++){
                    Cnt += check(s[stt[k-1]-'0'], s[stt[k]-'0']);
                }
                minz = min(Cnt, minz);
                if(minz == 0){
                    return;
                }
            }
            else{
                Try(i+1, stt);
            }
            stt.erase(stt.begin() + stt.length()-1, stt.begin() + stt.length());
            used[j] = false;            
        }
    }
}

int main(){
    init();
    Try(0, "");
    cout<<minz<<'\n';
    return 0;
}