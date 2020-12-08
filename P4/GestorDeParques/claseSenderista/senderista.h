#ifndef SENDERISTA_H
#define SENDERISTA_H
#include <iostream>
#include <string>
#include <list>
#include "../clasePersona/persona.h"
#include "../claseRuta/ruta.h"
using namespace std;

class Senderista : public Persona
{
    private:

    list<Ruta> participatesOnRoute_;
    int phoneNumber_;
    string specialRequirements_;

    public:

    Senderista(string dni, int phoneNumber) : Persona(dni) {phoneNumber_=phoneNumber;}
    inline list<Ruta> getParticipatesOnRoute() const {return participatesOnRoute_;}
    inline int getPhoneNumber() const {return phoneNumber_;}
    inline string getSpecialRequirements() const {return specialRequirements_;}
    inline bool setParticipatesOnRoute(list<Ruta> const &participatesOnRute){if(participatesOnRute.empty()){return false;}participatesOnRoute_=participatesOnRute; return true;}
    inline bool setPhoneNumber(int const &phoneNumber){if(phoneNumber<100000000){return false;}phoneNumber_=phoneNumber; return true;}
    inline bool setSpecialRequirements(string const &specialRequirements){if(specialRequirements.empty()){return false;}specialRequirements_=specialRequirements; return true;}

};
#endif