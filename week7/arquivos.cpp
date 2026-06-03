#include <bits/stdc++.h>
using namespace std;

int main(){
    #define int unsigned long long
    int n, k; cin >> n >> k;
    int pastas = 1, sum = 0;

    while(n--){
        int a; cin >> a;
        sum += a;
        if(sum > k){
            pastas++;
            sum = a;
        }
    }

    cout << pastas << endl;
}