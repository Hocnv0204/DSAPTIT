#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int tc ; cin >> tc;
    while(tc--){
       int n ; cin >> n;
       int s[n],f[n];
       for(int i = 0 ; i < n ; i ++){
        cin >> s[i];
       }
       for(int i = 0 ; i < n ;i ++){
        cin >> f[i];
       }
       sort(s,s+n);
       sort(f,f+n);
       int cnt = 0;
       for(int i = 0 ; i < n-1 ; i ++){
        if(s[i] >= f[i]){
            for(int j = i ; j <= n ; j ++){
                if(f[j] <= s[i+1]){
                    cnt ++;
                    i = j;
                    break;
                }
            }
        }
       }
       cout << cnt << endl;
    }
    return 0;
}
0 1 3 5 5 8
2 4 6 7 9 9
