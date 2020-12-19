#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
#include <string>
#include <list>
#include "../clasePersona/persona.h"
using namespace std;

class Ruta;

class Trabajador : public Persona
{
    private:

        string email_;
        string address_;

    public:

        Trabajador(string dni, string email, string address) : Persona(dni) {email_=email; address_=address;}

        string getAddress() const { return address_; }
        string getEmail() const { return email_; }

        bool setAddress(string address) {if(address.empty()){return false;} address_ = address; return true; }
        bool setEmail(string email) {if(email.empty()){return false;} email_ = email; return true; }

        bool addRoute(list<Ruta*> &listOfRoutes);
        bool editRoute(list<Ruta*> &listOfRoutes);
        bool deletRoute(list<Ruta*> &listOfRoutes);
        void viewRoute(list<Ruta*> &listOfRoutes);

};
#endif