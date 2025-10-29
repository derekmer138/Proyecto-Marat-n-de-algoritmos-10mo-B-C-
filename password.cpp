// ex01_stack_simulator.cpp
#include <iostream>
#include <vector>
using namespace std;
// Simula una pila (push/pop) usando vector con capacidad fija.
int main(){
    int cap;
    cout<<"Capacidad de la pila: "; cin>>cap;
    vector<int> st;
    st.reserve(cap);
    int op,x;
    do{
        cout<<"\n1.Push  2.Pop  3.Top  4.Mostrar  0.Salir\nOpcion: ";
        cin>>op;
        if(op==1){
            if((int)st.size()==cap) cout<<"Pila llena\n";
            else{ cout<<"Valor a push: "; cin>>x; st.push_back(x); }
        } else if(op==2){
            if(st.empty()) cout<<"Pila vacia\n";
            else{ cout<<"Pop: "<<st.back()<<"\n"; st.pop_back(); }
        } else if(op==3){
            if(st.empty()) cout<<"Pila vacia\n";
            else cout<<"Top: "<<st.back()<<"\n";
        } else if(op==4){
            cout<<"Contenido (top->bottom): ";
            for(int i=(int)st.size()-1;i>=0;i--) cout<<st[i]<<" ";
            cout<<"\n";
        }
    } while(op!=0);
    return 0;
}
