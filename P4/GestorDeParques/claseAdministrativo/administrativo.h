#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <iostream>
#include "trabajador.h"
#include "parque.h"

class Administrativo : public Trabajador
{
    public:

    Administrativo(string dni, string email, string address) : Trabajador(dni, email, address){};
    bool addPark(Parque newPark){}
    
};
#endif