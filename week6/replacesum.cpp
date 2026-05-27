#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        int n, q; cin >> n >> q;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        
        for(int i = n-1; i >= 0; i--){
            if(b[i] > a[i]){
                a[i] = b[i];
            }
            if(i != 0 && a[i] > a[i-1]){
                a[i-1] = a[i];
            }
        }
        
        for(int i = 1; i < n; i++){
            a[i] = a[i] + a[i-1];
        }

        a.insert(a.begin(), 0);
        
        while(q--){
            int l, r; cin >> l >> r;
            cout << a[r] - a[l-1] << " "; 
        }
        cout << endl;
    }
}