// DSA05017 - DÃY SỐ BI-TONIC
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int tc; cin >> tc;
    while( tc --){
    int n ; cin >> n;
    vector <int> a(n);
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    ll f[n] , f1[n];
    for(int i = 0 ; i < n ; i ++){
        f[i] = a[i];
        for(int j = 0 ; j < i ; j ++){
            if(a[i] > a[j])
            f[i] = max( f[i] , f[j] + a[i]);
        }
    }
    for(int i = n - 1 ; i >= 0 ; i --){
        f1[i] = a[i];
        for(int j = i + 1 ; j < n ; j ++){
            if(a[i] > a[j])
            f1[i] = max( f1[i] , f1[j] + a[i]);
        }
    }
    ll sum = 0;
    for(int i = 0 ; i < n ; i ++){
        sum = max( sum , f[i] + f1[i] - a[i]);
    }
    cout << sum << endl;
    }
    return 0;
}
