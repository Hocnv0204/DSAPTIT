//DSA05012 - TỔ HỢP C(n, k)
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
ll c[1001][1001];
void init(){
    for(int i = 0 ; i <= 1000 ; i ++){
        for(int j = 0 ; j <= i ; j++){
            if(j == 0 || j == i)
            c[i][j] = 1;
        else{
        c[i][j] = (c[i-1][j-1] % mod +c[i-1][j] % mod) % mod;
            }
        }
    }
}
int main(){
    init();
    int tc; cin >> tc;
    while(tc --){
        int n , k ; cin >> n >> k ;
        cout << c[n][k] << endl;
    }
    return 0;
}