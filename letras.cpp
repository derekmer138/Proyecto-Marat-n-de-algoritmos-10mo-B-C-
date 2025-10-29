// ex05_linked_list.cpp
#include <iostream>
using namespace std;
struct Node{ int val; Node* next; Node(int v):val(v),next(nullptr){} };
int main(){
    Node* head = nullptr;
    int op,x;
    do{
        cout<<"\n1.Insertar inicio 2.Eliminar inicio 3.Mostrar 0.Salir\nOp: "; cin>>op;
        if(op==1){ cout<<"Valor: "; cin>>x; Node* n=new Node(x); n->next=head; head=n; }
        else if(op==2){
            if(!head) cout<<"Lista vacia\n";
            else{ Node* t=head; head=head->next; cout<<"Eliminado: "<<t->val<<"\n"; delete t; }
        } else if(op==3){
            Node* p=head;
            cout<<"Lista: ";
            while(p){ cout<<p->val<<" "; p=p->next; }
            cout<<"\n";
        }
    }while(op!=0);
    // liberar memoria
    while(head){ Node* t=head; head=head->next; delete t; }
}
