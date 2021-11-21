//
// Created by patri on 16/11/2021.
//

#include "Simulacao.h"
#include <time.h>
#include <sstream>

Simulacao::Simulacao(int nLinhas, int nColunas) : linhas(nLinhas), colunas(nColunas){
    //Random
    srand(time(NULL));
    //vector com as zonas
    vector<string> zonas;

    for(int i=0; i<nLinhas; i++){
        vector<Zona> v; //vetor auxiliar

        for(int j=0; j<nColunas; j++){
            //Se o vector ficar vazio então colocar de novo as zonas todas
            if(zonas.empty()){
                zonas = {"mnt", "dsr", "pas", "flr", "pnt", "znX"};
            }

            int pos = rand() % zonas.size(); //tamanho atual do vetor!

            //Adicionar uma zona ao vetor com o tipo que foi selecionado anteriormente
            v.push_back(Zona(zonas[pos]));

            //Apagar o tipo escolhido do vetor
            zonas.erase(zonas.begin() + pos);
        }
        ilha.push_back(v);

    }
}

string Simulacao::tostring() const {
    ostringstream oss;

    for(int i=0; i< linhas; i++){
        for(int j=0; j< colunas; j++){
            oss << ilha[i][j].getTipo() << " ";
        }
        oss << endl;
    }
        return oss.str();
}

const int Simulacao::getLinhas() const {
    return linhas;
}

const int Simulacao::getColunas() const {
    return colunas;
}

const string Simulacao::getZona(int linha, int coluna) {
    return ilha[linha][coluna].getTipo();
}

bool Simulacao::contrataTrabalhador(const string tipo) {
    for(int i=0; i< linhas; i++){
        for(int j=0; j< colunas; j++){
            if (ilha[i][j].getTipo() == "pas") {
                ilha[i][j].contrataTrabalhador(tipo);

                return true;
            }
        }
    }

    return false;
}

bool Simulacao::constroiEdificio(string tipo, int linha, int coluna) {
    ilha[linha][coluna].constroiEdificio(tipo);
}

bool Simulacao::podeConstruir(int linha, int coluna) {
    return ilha[linha][coluna].podeConstruir();
}

