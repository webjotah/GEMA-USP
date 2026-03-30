#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n, tam;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tam >> s;
        for(int j = 0; j < tam; j++){
            if(j+3 <= tam-1 && (s[j]!= 'a' && s[j] != 'e')){
                if(s[j+3] == 'a' || s[j+3] == 'e'){
                    s.insert(j+2,1,'.');
                    tam++;
                    j=j+2;
                } else {
                    s.insert(j+3,1,'.');
                    tam++;
                    j=j+3;
                }
            }
        }
        cout << s << endl;
    }


}