#include <bits/stdc++.h>
using namespace std;

// Ejercicio 55: DFS detectar ciclo en grafo
bool dfs(int u, int p, vector<vector<int>> &g, vector<int> &vis) {
    vis[u]=1;
    for(int v:g[u]) {
        if(v==p) continue;
        if(vis[v]==1) return true;
        if(vis[v]==0 && dfs(v,u,g,vis)) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i=0;i<m;++i) { int u,v; cin>>u>>v; u--; v--; g[u].push_back(v); g[v].push_back(u); }
    vector<int> vis(n,0);
    bool hasCycle=false;
    for(int i=0;i<n;++i) if(vis[i]==0 && dfs(i,-1,g,vis)) hasCycle=true;
    cout << (hasCycle?"Ciclo encontrado":"Sin ciclo") << "\n";
    return 0;
}
