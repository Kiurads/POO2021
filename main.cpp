#include <iostream>
#include <sstream>
#include "Interface.h"

int comecaSimulacao();

int main() {
    comecaSimulacao();
}
//aqui
int comecaSimulacao(){
    //instancia da classe interface
    Interface interface;
    string comando;

    while(comando != "sair")
    {
        cout << "Comando: ";

        getline(cin,comando); //string com espacos

        interface.comando(comando);
    }

}

