#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <iostream>
#include "trabajador.h"
#include "parque.h"

class Administrativo : public Trabajador
{
    public:

    Administrativo(string dni, string email, string address) : Trabajador(dni, email, address){};

    bool addPark(list<Parque> &listOfParks);
    bool editPark(list<Parque> &listOfParks);
    bool deletePark(list<Parque> &listOfParks);
    void viewPark(list<Parque> &listOfParks);
    
    bool addTrail(list<Parque> &listOfParks);
    bool editTrail(list<Parque> &listOfParks);
    bool deleteTrail(list<Parque> &listOfParks);
    void viewTrail(list<Parque> &listOfParks);

    

};
#endif