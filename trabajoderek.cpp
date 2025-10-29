#include <iostream>
using namespace std;

int main() {
    char t[9]={'1','2','3','4','5','6','7','8','9'}, g=' ';
    int m=0; char j='X';

    auto mostrar = [&](){
        for(int i=0;i<9;i++){
            cout<<t[i]<<" ";
            if((i+1)%3==0) cout<<endl;
        }
        cout<<endl;
    };

    auto ganador = [&]()->char{
        int c[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
        for(int i=0;i<8;i++)
            if(t[c[i][0]]==t[c[i][1]] && t[c[i][1]]==t[c[i][2]]) return t[c[i][0]];
        return ' ';
    };

    while(g==' ' && m<9){
        mostrar();
        int x; cout<<"Turno "<<j<<": "; cin>>x;
        if(x>=1 && x<=9 && t[x-1]!='X' && t[x-1]!='O'){ t[x-1]=j; m++; g=ganador(); j=(j=='X')?'O':'X';}
        else cout<<"Movimiento inválido\n";
    }

    mostrar();
    if(g!=' ') cout<<"¡Gana "<<g<<"!\n";
    else cout<<"¡Empate!\n";
}
