#include <bits/stdc++.h>
using namespace std;

int main(){
    int m[3][3], maiorv;

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            cin >> m[i][j];
        }
    }

    int soma = m[0][0] + m[0][1] + m[0][2];

    if(m[1][0]+m[1][1]+m[1][2] != soma){
        cout<<"NAO"<<endl;
    } else if(m[2][0]+m[2][1]+m[2][2] != soma){
        cout<<"NAO"<<endl;
    } else if(m[1][0]+m[2][0]+m[0][0] != soma){
        cout<<"NAO"<<endl;
    } else if(m[1][1]+m[2][1]+m[0][1] != soma){
        cout<<"NAO"<<endl;
    } else if(m[1][2]+m[2][2]+m[0][2] != soma){
        cout<<"NAO"<<endl;
    } else if(m[0][0]+m[1][1]+m[2][2] != soma){
        cout<<"NAO"<<endl;
    } else if(m[0][2]+m[1][1]+m[2][0] != soma){
        cout<<"NAO"<<endl;
    } else {
        cout << "SIM" << endl;
    }
}