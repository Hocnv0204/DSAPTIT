#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector <int> a;
        for(int i = 0 ; i < n ; i ++){
            int x ; cin >> x ;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int value = 1e9;
        for(int i = 0 ; i < n - 1 ; i ++){
            value = min(value,a[i+1] - a[i]);
        }
        cout << value << endl;
    }
    return 0;
}