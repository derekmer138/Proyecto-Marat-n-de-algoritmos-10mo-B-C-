// ex20_simulated_threads.cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
// Simula scheduling round-robin de tareas con "quantum" (sin hilos reales).
int main(){
    int n; cout<<"Numero de tareas: "; cin>>n;
    queue<pair<int,int>> q; // <id, tiempo restante>
    for(int i=1;i<=n;i++){ int t; cout<<"Tiempo tarea "<<i<<": "; cin>>t; q.push({i,t}); }
    int quantum; cout<<"Quantum: "; cin>>quantum;
    cout<<"Orden de ejecucion (simulado):\n";
    while(!q.empty()){
        auto p=q.front(); q.pop();
        int id=p.first, rem=p.second;
        int run = min(rem, quantum);
        rem -= run;
        cout<<"Tarea "<<id<<" ejecuta "<<run<<" unidades. Restante: "<<rem<<"\n";
        if(rem>0) q.push({id,rem});
    }
    cout<<"Simulacion completada\n";
}
