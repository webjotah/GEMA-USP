#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// Agora a DFS retorna TRUE se o vértice 'u' deve ser MANTIDO na coleção
bool dfs(int u, vector<int> g[], vector<bool>& vis, vector<int>& res, vector<bool>& no_grau) {
    vis[u] = true;
    
    // Primeiro, vamos rodar a DFS para todos os vizinhos MAIORES que ainda não foram visitados.
    // Isso garante que os Upas mais raros tomem a decisão deles primeiro.
    for(auto viz : g[u]) {
        if(viz > u && !vis[viz]) {
            dfs(viz, g, vis, res, no_grau);
        }
    }

    // AGORA ESTAMOS NA VOLTA DA RECURSÃO (PÓS-ORDEM)
    // Os Upas maiores que 'u' já decidiram suas vidas.
    
    // Vamos checar se algum vizinho de 'u' que é MAIOR foi mantido na coleção.
    // Se um vizinho maior foi mantido, significa que 'u' obrigatoriamente NÃO PODE ser mantido (não combinam).
    bool vizinho_maior_foi_mantido = false;
    for(auto viz : g[u]) {
        if(viz > u && no_grau[viz]) { // no_grau[viz] indica se o vizinho maior está na resposta
            vizinho_maior_foi_mantido = true;
            break;
        }
    }

    // Se nenhum vizinho maior e mais raro expulsou o 'u', então nós DEVEMOS manter o 'u'!
    if (!vizinho_maior_foi_mantido) {
        no_grau[u] = true; // Marca que o 'u' vai para a coleção
        res.push_back(u);
        return true;
    }

    return false; // 'u' foi expulso por alguém maior
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> g[n+1], res;
    vector<bool> vis(n+1, false);
    
    // Esse vetor vai guardar se o Upa i foi de fato escolhido para a coleção final
    vector<bool> no_grau(n+1, false); 

    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // O loop continua de 1 até N. Como a DFS mergulha até o maior vizinho primeiro,
    // a árvore de recursão vai se resolver de cima (maiores) para baixo (menores).
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i, g, vis, res, no_grau);
        }
    }

    sort(res.begin(), res.end());

    cout << res.size() << endl;
    for(auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}