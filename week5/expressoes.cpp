#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool b = false;
    string aux;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        stack<char> p;
        b = false;


        for(int j = 0; j < aux.length(); j++){
            if(aux[j] == '(' || aux[j] == '{' || aux[j] == '['){
                p.push(aux[j]);
            } else if(!p.empty()){
                if(aux[j] == '}'&& p.top() == '{' || aux[j] == ']' && p.top() == '[' || aux[j] == ')' && p.top() == '('){
                    p.pop();
                } else {
                    b = true;
                    cout << 'N' << endl;
                    break;
                }   
            } else {
                b = true;
                cout << 'N' << endl;
                break;
            }
        }


        if(p.empty() && !b){
            cout << 'S' << endl;
        } else if(!b){
            cout << 'N' << endl;
        }
    }
    
}