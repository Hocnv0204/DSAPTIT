#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
ll c[1001][1001];
void ktao(){
    for(int i = 0 ; i <= 1000 ; i ++){
        for(int j = 0 ; j <= i ; j++){
            if(j == 0 || j == 1)
            c[i][j] = 1;
        else{
        c[i][j] = (c[i-1][j-1]+c[i-1][j]) % mod;
            }
        }
    }
}
int main(){
    ktao();
    for(int i = 0 ; i <= 9 ; i ++){
        for(int j = 0 ; j <= i ; j ++){
            cout << c[i][j] <<" ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}