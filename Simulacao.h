//
// Created by patri on 16/11/2021.
//

#ifndef TP_SIMULACAO_H
#define TP_SIMULACAO_H

#include "Zona.h"

class Simulacao {
    int linhas;
    int colunas;
    vector<vector<Zona>> ilha;

public:
    Simulacao(int nLinhas, int nColunas);
    const int getLinhas() const;
    const int getColunas() const;
    bool contrataTrabalhador(const string tipo);
    string tostring() const;
    const string getZona(int linha, int coluna);
    bool podeConstruir(int linha, int coluna);
    bool constroiEdificio(string basicString, int i, int i1);
};


#endif //TP_SIMULACAO_H
