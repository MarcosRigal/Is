#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <iostream>

#include "../claseMonitor/monitor.h"
#include "../claseSenderista/senderista.h"
#include "../claseSendero/sendero.h"
#include "../claseParque/parque.h"

class Administrativo : public Trabajador
{
    public:

    Administrativo(string dni, string name, string birthday, string surnames, string email, string address) : Trabajador(dni, name, birthday, surnames, email, address){};

    bool addPark(list<Parque> &listOfParks, int parkID);
    bool editPark(list<Parque> &listOfParks, int parkID);
    bool deletePark(list<Parque> &listOfParks, int parkID);
    Parque viewPark(list<Parque> &listOfParks, int parkID);
    
    bool addTrail(list<Sendero> &listOfTrails, int parkID, int trailID);
    bool editTrail(list<Sendero> &listOfTrails, int parkID, int trailID);
    bool deleteTrail(list<Sendero> &listOfTrails, int parkID, int trailID);
    Sendero viewTrail(list<Sendero> &listOfTrails, int parkID, int trailID);

    bool addMonitor(list<Monitor> &listOfMonitors, string dni);
    bool editMonitor(list<Monitor> &listOfMonitors, string dni);
    bool deleteMonitor(list<Monitor> &listOfMonitors, string dni);
    Monitor viewMonitor(list<Monitor> &listOfMonitors, string dni);

    bool addAdministrator(list<Administrativo> &listOfAdministrators, string dni);
    bool editAdministrator(list<Administrativo> &listOfAdministrators, string dni);
    bool deleteAdministrator(list<Administrativo> &listOfAdministrators, string dni);
    Administrativo viewAdministrator(list<Administrativo> &listOfAdministrators, string dni);

    bool addExcursionist(list<Senderista> &listOfExcursionists, string dni);
    bool editExcursionist(list<Senderista> &listOfExcursionists, string dni);
    bool deleteExcursionist(list<Senderista> &listOfExcursionists, string dni);
    Senderista viewExcursionist(list<Senderista> &listOfExcursionists, string dni);

    bool addExcursionistToRoute(list<Ruta> &listOfRoutes, int parkID, int routeID, string dni);
    bool deleteExcursionistFromRoute(list<Ruta> &listOfRoutes, int parkID, int routeID, string dni);    

};
#endif