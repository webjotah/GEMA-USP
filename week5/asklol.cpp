#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, aux;
    string str;
    bool op = true;

    cin >> t;

    while(t--){
        cin >> aux;
        cin >> str;
        op = true;
        while(op){
            op = false;
                for(int i = 0; i < str.length(); i++){
                    if(str[i] == str[i+1]){
                        str.erase(i, 1);
                        str.erase(i, 1);
                        op = true;
                    }
                }
        }

        if(str.length() == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}