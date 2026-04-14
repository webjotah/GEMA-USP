#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, totSum = 0, halfSum;
    set<long long> s1, s2;

    cin >> n;

    for(long long i = 0 ; i <= n; i++){
        totSum += i;
    }

    if(totSum%2 != 0 ){
        cout << "NO" << endl;
        return 0;
    } else {
        cout << "YES" << endl;
    }

    halfSum = totSum/2;

    for(long long i = n ; i > 0; i--){
        if(halfSum - i >= 0){
            s1.insert(i);
            halfSum -= i;
        } else {
            s2.insert(i);
        }
    }

    cout << s2.size() << endl;
    for(long long i : s2){
        cout << i << " ";
    }

    cout << endl;
    cout << s1.size() << endl;
    for(long long i : s1){
        cout << i << " ";
    }
    cout << endl;

}
