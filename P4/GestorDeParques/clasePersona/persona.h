#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
using namespace std;

class Persona{
    private:

        string name_;
        string surnames_;
        string dni_;
        string birthday_;

    public:

        inline Persona(string dni){setDni(dni);}

        inline string getName() const { return name_; }
        inline string getSurname() const { return surnames_; }
        inline string getDni() const { return dni_; }
        inline string getBirthday() const { return birthday_; }

        bool setName(string const name) {if(name.empty()){return false;}name_ = name; return true;}
        bool setSurname(string const surnames) {if(surnames.empty()){return false;} surnames_ = surnames; return true;}
        bool setDni(string const dni);
        bool setBirthday(string const birthday) {if(birthday.empty()){return false;} birthday_ = birthday; return true;}

};
#endif