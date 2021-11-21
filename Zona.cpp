//
// Created by patri on 16/11/2021.
//

#include <sstream>
#include "Zona.h"

Zona::Zona(string tipo) : tipo(tipo) {
    edificio = nullptr;
}

const string Zona::getTipo() const {
    return tipo;
}

bool Zona::contrataTrabalhador(string tipo) {
    trabalhadores.push_back(Trabalhador(0, tipo));
}

bool Zona::constroiEdificio(string tipo) {
    edificio = new Edificio(tipo);
}

bool Zona::podeConstruir() {
    return edificio == nullptr;
}
