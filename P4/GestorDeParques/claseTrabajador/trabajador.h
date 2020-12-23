#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
#include <string>
#include <list>
#include "../clasePersona/persona.h"
#include "../claseRuta/ruta.h"
using namespace std;


class Trabajador : public Persona
{
    private:

        string email_;
        string address_;

    public:

        Trabajador(string dni, string name, string birthday, string surnames, string email, string address) : Persona(dni, name, birthday, surnames) {setEmail(email); setAddress(address);}

        string getAddress() { return address_; }
        string getEmail() { return email_; }

        inline bool setAddress(string address) {if(address.empty()){return false;} address_ = address; return true; }
        inline bool setEmail(string email) {if(email.empty()){return false;} email_ = email; return true; }

        bool addRoute(list<Ruta> &listOfRoutes, int parkID, int routeID);
        bool editRoute(list<Ruta> &listOfRoutes, int parkID, int routeID);
        bool deleteRoute(list<Ruta> &listOfRoutes, int parkID, int routeID);
        Ruta viewRoute(list<Ruta> &listOfRoutes, int parkID, int routeID);

};
#endif