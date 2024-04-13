#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int tc ; cin >> tc;
    while(tc--){
    int n ; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    ll f[n] ;
    for(int i = 0 ; i < n ; i ++){
        f[i] = a[i];
        for(int j = 0 ; j < i ; j ++){
            if(a[i] > a[j]){
                f[i] = max(f[i] , f[j] + a[i]);
            }
        }
    }
    cout << *max_element(f , f + n) << endl;
    }
    return 0;
}
// 2 12 3 15 3 16 11 4
