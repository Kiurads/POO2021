//
// Created by patri on 16/11/2021.
//

#ifndef TP_EDIFICIO_H
#define TP_EDIFICIO_H
#include <string>

using namespace std;

class Edificio {
    string tipo;
    bool ligado;
public:

    Edificio() = default;
    Edificio(string tipo);
};


#endif //TP_EDIFICIO_H
