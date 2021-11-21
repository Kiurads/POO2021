//
// Created by patri on 16/11/2021.
//
#include <sstream>
#include "Trabalhador.h"

int Trabalhador::nTrabalhadores = 0;

Trabalhador::Trabalhador(int dia, string tipo) {
    nTrabalhadores ++; //incrementa o numero de trabalhadores
    this->tipo = tipo;

    ostringstream oss;

    oss << nTrabalhadores << '.' << dia;

    id = oss.str();

}

const string Trabalhador::getTipo() const {
    return tipo;
}

