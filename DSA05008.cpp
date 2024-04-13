//DSA05008 - DÃY CON CÓ TỔNG BẰNG S
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc; cin >> tc;
    while(tc--){
    int n , s ; cin >> n >> s;
    int a[n];
    for(int i = 0 ; i < n ;i ++){
        cin >> a[i];
    }
    vector < bool > F(s + 1 , 0);
    F[0] = 1;
    for(int i = 0 ; i < n ; i ++){
        for(int j = s ; j >= a[i] ; j--){
            if(F[j - a[i]]){
                F[j] = 1;
            }
        }
    }
    if(F[s])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
    return 0;
}
