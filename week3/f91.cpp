#include <bits/stdc++.h>
using namespace std;

int f91(int a){
    if(a >=101){
        return a - 10;
    } else {
        return f91(f91(a + 11));
    }
}

int main(){
    int aux = 1;
    while(aux != 0){
        cin >> aux;
        if(aux != 0){
            cout << "f91(" << aux << ") = " << f91(aux) << endl;
        }
    }
}