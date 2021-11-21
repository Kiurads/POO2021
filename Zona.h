//
// Created by patri on 16/11/2021.
//

#ifndef TP_ZONA_H
#define TP_ZONA_H
#include <string>
#include <vector>
#include "Edificio.h"
#include "Trabalhador.h"

using namespace std;

class Zona {
    string tipo; //tipo de zona
    Edificio* edificio;
    vector<Trabalhador> trabalhadores; //vetor trabalhadores

public:
    Zona(string tipo);

    bool contrataTrabalhador(string tipo);
    const string getTipo() const;
    bool podeConstruir();
    bool constroiEdificio(string tipo);
};


#endif //TP_ZONA_H
