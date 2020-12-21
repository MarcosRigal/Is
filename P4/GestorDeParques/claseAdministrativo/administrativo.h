#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <iostream>

#include "../claseTrabajador/trabajador.h"

class Parque;
class Monitor;
class Sendero;
class Senderista;
class Monitor;

class Administrativo : public Trabajador
{
    public:

    Administrativo(string dni, string email, string address) : Trabajador(dni, email, address){};

    bool addPark(list<Parque*> &listOfParks, Parque p);
    bool editPark(list<Parque*> &listOfParks, Parque p);
    bool deletePark(list<Parque*> &listOfParks, Parque p);
    Parque* viewPark(list<Parque*> &listOfParks, Parque p);
    
    bool addTrail(list<Sendero*> &listOfTrails, Sendero s);
    bool editTrail(list<Sendero*> &listOfTrails, Sendero s);
    bool deleteTrail(list<Sendero*> &listOfTrails, Sendero s);
    Sendero* viewTrail(list<Sendero*> &listOfTrails, Sendero s);

    bool addMonitor(list<Monitor*> &listOfMonitors, Monitor m);
    bool editMonitor(list<Monitor*> &listOfMonitors, Monitor m);
    bool deleteMonitor(list<Monitor*> &listOfMonitors, Monitor m);
    Monitor* viewMonitor(list<Monitor*> &listOfMonitors, Monitor m);

    bool addAdministrator(list<Administrativo> &listOfAdministrators, Administrativo a);
    bool editAdministrator(list<Administrativo> &listOfAdministrators, Administrativo a);
    bool deleteAdministrator(list<Administrativo> &listOfAdministrators, Administrativo a);
    Administrativo viewAdministrator(list<Administrativo> &listOfAdministrators, Administrativo a);

    bool addExcursionist(list<Senderista*> &listOfExcursionists);
    bool editExcursionist(list<Senderista*> &listOfExcursionists);
    bool deleteExcursionist(list<Senderista*> &listOfExcursionists);
    void viewExcursionist(list<Senderista*> &listOfExcursionists);

    bool addExcursionistToRoute(list<Parque*> &listOfParks, list<Senderista*> &listOfExcursionists);
    bool deleteExcursionistFromRoute(list<Parque*> &listOfParks, list<Senderista*> &listOfExcursionists);    

};
#endif