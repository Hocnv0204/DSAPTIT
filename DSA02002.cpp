#include<bits/stdc++.h>
using namespace std;
vector <string> v;
int main(){
    int tc; cin >> tc;
    while(tc--){
        v.clear();
        int n ; cin >> n;
        vector <int> a;
        for(int i = 0 ; i < n ; i ++){
            int x ; cin >> x;
            a.push_back(x);
        }
        string s = "";
        s+= "[";
            for(int i = 0 ; i < a.size() ; i++){
                s+= to_string(a[i]);
                if(i == a.size()-1)
                    s+= "]";
                else
                    s+=" ";
            }
            v.push_back(s);
        while(a.size() > 1){
        for(int i = 0 ; i < n-1 ; i ++){
            a[i] += a[i+1];
        }
            a.pop_back();
            string tmp;
            tmp += "[";
            for(int i = 0 ; i < a.size() ; i++){
                tmp += to_string(a[i]);
                if(i == a.size()-1)
                    tmp += "]";
                else
                    tmp += " ";
            }
            v.push_back(tmp);
    }
        for(int i = v.size() - 1 ; i >= 0 ; i--){
            cout << v[i]  << " ";
        }
        cout << endl;
    }
    return 0;
}