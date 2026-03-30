/*
#include <bits/stdc++.h>
using namespace std;

int main(){
        int x, n, aux, soma, sp1, sp2;
    set<pair<int, int>> m;
    pair<int, int> p1, p2;
    multiset<int> somas;

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    

    cin >> x >> n;

    m.insert(make_pair(0, x));
    somas.insert(x);

    for(int i = 0; i < n; i++){
        cin >> aux;

        auto it = m.lower_bound({aux, 0});
        --it;

        auto it2 = somas.find(it->second - it->first);
        somas.erase(it2);

        p1 = make_pair(it->first, aux);
        sp1 = aux - it->first;
        p2 = make_pair(aux,it->second);
        sp2 = it->second - aux;

        m.erase(it);
        m.insert(p1);
        somas.insert(sp1);
        m.insert(p2);
        somas.insert(sp2);
        cout << *somas.rbegin() << "\n";
    }   
     

     
    
} */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;

    // 1. Set para guardar as POSIÇÕES dos semáforos
    // Começamos com os limites da rua: 0 e x
    set<int> posicoes;
    posicoes.insert(0);
    posicoes.insert(x);

    // 2. Multiset para guardar os TAMANHOS dos vãos (distâncias)
    // Começamos com um único vão de tamanho x
    multiset<int> distancias;
    distancias.insert(x);

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;

        // --- LÓGICA DE QUEBRA DO INTERVALO ---

        // A. Encontrar os vizinhos de 'p'
        // it_dir será o primeiro semáforo à DIREITA de p
        auto it_dir = posicoes.lower_bound(p);
        
        // it_esq será o semáforo imediatamente à ESQUERDA de p
        auto it_esq = prev(it_dir); 

        // B. Calcular a distância antiga que será destruída
        int dist_antiga = *it_dir - *it_esq;

        // C. Remover UMA instância da dist_antiga do multiset
        // Usamos find para garantir que apagamos apenas um elemento, não todos
        distancias.erase(distancias.find(dist_antiga));

        // D. Calcular as duas novas distâncias menores
        int d1 = p - *it_esq;
        int d2 = *it_dir - p;

        // E. Inserir as novas distâncias e a nova posição do semáforo
        distancias.insert(d1);
        distancias.insert(d2);
        posicoes.insert(p);

        // F. O maior vão é sempre o último elemento do multiset
        cout << *distancias.rbegin() << "\n";
    }

    return 0;
}