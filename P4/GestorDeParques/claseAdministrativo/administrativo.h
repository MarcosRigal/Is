#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <iostream>

#include "../claseTrabajador/trabajador.h"

class Parque;
class Monitor;
class Sendero;
class Senderista;

class Administrativo : public Trabajador
{
    public:

    Administrativo(string dni, string email, string address) : Trabajador(dni, email, address){};

    bool addPark(list<Parque*> &listOfParks, Parque p);
    bool editPark(list<Parque*> &listOfParks, Parque p);
    bool deletePark(list<Parque*> &listOfParks, Parque p);
    Parque* viewPark(list<Parque*> &listOfParks, Parque p);
    
    bool addTrail(list<Sendero*> &listOfParks);
    bool editTrail(list<Sendero*> &listOfParks);
    bool deleteTrail(list<Sendero*> &listOfParks);
    void viewTrail(list<Sendero*> &listOfParks);

    bool addMonitor(list<Monitor*> &listOfMonitors);
    bool editMonitor(list<Monitor*> &listOfMonitors);
    bool deleteMonitor(list<Monitor*> &listOfMonitors);
    void viewMonitor(list<Monitor*> &listOfMonitors);

    bool addAdministrator(list<Administrativo> &listOfAdministrators);
    bool editAdministrator(list<Administrativo> &listOfAdministrators);
    bool deleteAdministrator(list<Administrativo> &listOfAdministrators);
    void viewAdministrator(list<Administrativo> &listOfAdministrators);

    bool addExcursionist(list<Senderista*> &listOfExcursionists);
    bool editExcursionist(list<Senderista*> &listOfExcursionists);
    bool deleteExcursionist(list<Senderista*> &listOfExcursionists);
    void viewExcursionist(list<Senderista*> &listOfExcursionists);

    bool addExcursionistToRoute(list<Parque*> &listOfParks, list<Senderista*> &listOfExcursionists);
    bool deleteExcursionistFromRoute(list<Parque*> &listOfParks, list<Senderista*> &listOfExcursionists);    

};
#endif