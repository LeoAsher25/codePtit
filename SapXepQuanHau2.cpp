#include<bits/stdc++.h>
using namespace std;
int a[10][10];
bool xuoi[20], nguoc[20], col[10];
int res[10] = {0};

void init(){
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            cin>>a[i][j];
    memset(xuoi, true, 20);
    memset(nguoc, true, 20);
    memset(col, true, 10);
}
int maz = 0;


void Try(int row, int sum){
    for(int i=0; i<8; i++){
        if(col[i] && xuoi[row+i] && nguoc[row-i+7]){
            col[i] = false;
            xuoi[row+i] = false;
            nguoc[row-i+7] = false;
            sum += a[row][i];
            if(row == 7)    maz = max(sum, maz); // có trường hợp a[i][j] âm
            else {
                Try(row+1, sum);
            }
            sum -= a[row][i];
            col[i] = true;
            xuoi[row+i] = true;
            nguoc[row-i+7] = true;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        maz = 0;
        Try(0, 0);
        cout<<maz<<"\n";
    }
    return 0;
}
/*
2

1 2 3 4 5 6 7 8

9 10 11 12 13 14 15 16

17 18 19 20 21 22 23 24

25 26 27 28 29 30 31 32

33 34 35 36 37 38 39 40

41 42 43 44 45 46 47 48

48 50 51 52 53 54 55 56

57 58 59 60 61 62 63 64
*/