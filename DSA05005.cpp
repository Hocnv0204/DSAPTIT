//DSA05005 - SỐ BƯỚC ÍT NHẤT
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int tc ; cin >> tc;
    while(tc--){
    int n ; cin >> n;
    vector < int > a(n);
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    int f[n];
    for(int i = 0 ; i < n ; i ++){
        f[i] = 1;
        for(int j = 0  ; j < i ; j ++){
            if(a[j] <= a[i])
            f[i] = max(f[i] , f[j] + 1);
        }
    }
    cout << n - *max_element(f, f + n) << endl;
    }
    return 0;
}
