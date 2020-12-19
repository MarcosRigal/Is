#ifndef SENDERISTA_H
#define SENDERISTA_H
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "../clasePersona/persona.h"

class Ruta;

class Senderista : public Persona
{
    private:

    list<int> participatesOnRoute_;
    int phoneNumber_;
    string specialRequirements_;

    public:

    Senderista(string dni, int phoneNumber) : Persona(dni) {phoneNumber_=phoneNumber;}

    list<int> getParticipatesOnRoute() const;
    inline int getPhoneNumber() const {return phoneNumber_;}
    inline string getSpecialRequirements() const {return specialRequirements_;}
    
    bool setParticipatesOnRoute(list<int> const &participatesOnRute);
    inline bool setPhoneNumber(int const &phoneNumber){if(phoneNumber<100000000){return false;}phoneNumber_=phoneNumber; return true;}
    inline bool setSpecialRequirements(string const &specialRequirements){if(specialRequirements.empty()){return false;}specialRequirements_=specialRequirements; return true;}

};
#endif