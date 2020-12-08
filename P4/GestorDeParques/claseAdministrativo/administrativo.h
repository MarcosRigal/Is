#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <iostream>

#include "../claseTrabajador/trabajador.h"

class Parque;

class Administrativo : public Trabajador
{
    public:

    bool addPark(list<Parque> &listOfParks);
    bool editPark(list<Parque> &listOfParks);
    bool deletePark(list<Parque> &listOfParks);
    void viewPark(list<Parque> &listOfParks);
    
    bool addTrail(list<Parque> &listOfParks);
    bool editTrail(list<Parque> &listOfParks);
    bool deleteTrail(list<Parque> &listOfParks);
    void viewTrail(list<Parque> &listOfParks);

    bool addMonitor(list<Monitor> &listOfMonitors);
    bool editMonitor(list<Monitor> &listOfMonitors);
    bool deleteMonitor(list<Monitor> &listOfMonitors);
    void viewMonitor(list<Monitor> &listOfMonitors);

    bool addAdministrator(list<Administrativo> &listOfAdministrators);
    bool editAdministrator(list<Administrativo> &listOfAdministrators);
    bool deleteAdministrator(list<Administrativo> &listOfAdministrators);
    void viewAdministrator(list<Administrativo> &listOfAdministrators);

    bool addExcursionist(list<Senderista> &listOfExcursionists);
    bool editExcursionist(list<Senderista> &listOfExcursionists);
    bool deleteExcursionist(list<Senderista> &listOfExcursionists);
    void viewExcursionist(list<Senderista> &listOfExcursionists);

    bool addExcursionistToRoute(list<Parque> &listOfParks, list<Senderista> &listOfExcursionists);
    bool deleteExcursionistFromRoute(list<Parque> &listOfParks, list<Senderista> &listOfExcursionists);    

};
#endif