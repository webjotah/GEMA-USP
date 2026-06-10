#include <bits/stdc++.h>
using namespace std;

int main(){
    #define int unsigned long long
    int n, k; cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int pastas = 0, left = 0, right = n-1;
    
    while(left <= right){
        if(v[left] + v[right] <= k) left++;
        right--;
        pastas++;
    }

    cout << pastas << endl;
}