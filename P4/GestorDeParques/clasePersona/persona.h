#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
#include "systemFunctions.h"
using namespace std;

class Persona{
    private:

        string name_;
        string surnames_;
        string dni_;
        string birthday_;

    public:

        inline Persona(string dni){ dni_ = dni; }

        inline string getName() const { return name_; }
        inline string getSurname() const { return surnames_; }
        inline string getDni() const { return dni_; }
        inline string getBirthday() const { return birthday_; }

        bool setName(string const name) { name_ = name; }
        bool setSurname(string const surnames) { surnames_ = surnames; }
        bool setDni(string const dni);
        bool setBirthday(string const birthday) { birthday_ = birthday; }
};
#endif