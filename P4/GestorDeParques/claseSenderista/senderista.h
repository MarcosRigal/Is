#ifndef SENDERISTA_H
#define SENDERISTA_H
#include <iostream>
#include <string>
using namespace std;

#include "../clasePersona/persona.h"

class Senderista : public Persona
{
    private:

    int phoneNumber_;
    string specialRequirements_;

    public:

    Senderista(string dni, string name, string birthday, string surnames, int phoneNumber, string specialRequirements = "") : Persona(dni, name, birthday, surnames) {setPhoneNumber(phoneNumber); setSpecialRequirements(specialRequirements);}

    inline int getPhoneNumber() {return phoneNumber_;}
    inline string getSpecialRequirements() {return specialRequirements_;}
    
    inline bool setPhoneNumber(int phoneNumber){if(phoneNumber<100000000||phoneNumber>999999999){return false;}phoneNumber_=phoneNumber; return true;}
    inline bool setSpecialRequirements(string specialRequirements){if(specialRequirements.empty()){return false;}specialRequirements_=specialRequirements; return true;}

};
#endif