#include <bits/stdc++.h>
using namespace std;

// Ejercicio 19: BFS en grafo no ponderado
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; ++i) {
        int u,v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> dist(n,-1);
    queue<int> q;
    dist[0] = 0;
    q.push(0);
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(int v:g[u]) if(dist[v]==-1) { dist[v]=dist[u]+1; q.push(v); }
    }
    for(int d:dist) cout << d << " ";
    cout << "\n";
    return 0;
}
