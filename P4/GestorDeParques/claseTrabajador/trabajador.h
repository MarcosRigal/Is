#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
#include <string>
#include "persona.h"
using namespace std;

class Trabajador : public Persona
{
    private:

        string email_;
        string address_;

    public:

        Trabajador(string dni, string email, string address) : Persona(dni) {email_=email; address_=address;}

        string getAddress() const { return address_; }
        string getEmail() const { return email_; }

        bool setAddress(string address) { address_ = address; }
        bool setEmail(string email) { email_ = email; }

        bool addRoute(int parkID);
        bool editRoute(int parkID, int routeID);
        bool deleteRoute(int parkID, int routeID);
        bool viewRoute(int parkID, int routeID);

};
#endif