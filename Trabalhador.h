//
// Created by patri on 16/11/2021.
//

#ifndef TP_TRABALHADOR_H
#define TP_TRABALHADOR_H

#include <string>

using namespace std;

class Trabalhador {
    static int nTrabalhadores;
    string id; //identificador
    string tipo; //tipo de trabalhador

public:
    Trabalhador(int dia, string tipo);

    const string getTipo() const;

};



#endif //TP_TRABALHADOR_H
