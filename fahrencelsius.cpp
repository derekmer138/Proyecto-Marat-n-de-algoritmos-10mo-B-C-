// ex12_graph_bfs_dfs.cpp
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// Entrada: n m  (n nodos, m aristas) luego m pares u v (0-based)
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v); g[v].push_back(u); }
    int start; cin>>start;
    // BFS
    vector<int> vis(n,0);
    queue<int> q; q.push(start); vis[start]=1;
    cout<<"BFS: ";
    while(!q.empty()){ int u=q.front(); q.pop(); cout<<u<<" "; for(int v:g[u]) if(!vis[v]){vis[v]=1; q.push(v);} }
    cout<<"\n";
    // DFS (iterativo)
    vector<int> seen(n,0);
    vector<int> stack; stack.push_back(start);
    cout<<"DFS: ";
    while(!stack.empty()){ int u=stack.back(); stack.pop_back();
        if(seen[u]) continue;
        seen[u]=1; cout<<u<<" ";
        for(int v:g[u]) if(!seen[v]) stack.push_back(v);
    }
    cout<<"\n";
}
