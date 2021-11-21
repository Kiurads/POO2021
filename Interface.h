//
// Created by patri on 16/11/2021.
//

#ifndef TP_INTERFACE_H
#define TP_INTERFACE_H
#include "Simulacao.h"
#include <sstream>
#include <iostream>

using namespace std;

class Interface {
    Simulacao simulacao;
public:
    Interface();
    //Metodo para interpretar comando
    void comando(const string comando);

};


#endif //TP_INTERFACE_H
