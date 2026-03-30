#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(i == 0 && s[i] != '<'){
            cout << "No" << endl;
            return 0;
        } else if(i == s.length()-1 && s[i] != '>'){
            cout << "No" << endl;
            return 0;
        } else if(i != 0 && i != s.length()-1 && s[i] != '='){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}