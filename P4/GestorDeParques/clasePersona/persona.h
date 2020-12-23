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

        inline Persona(string dni, string name, string birthday, string surnames = ""){setDni(dni); setName(name); setSurnames(surnames); setBirthday(birthday);}

        inline string getName() { return name_; }
        inline string getSurnames() { return surnames_; }
        inline string getDni() { return dni_; }
        inline string getBirthday() { return birthday_; }

        inline bool setName(string name) {if(name.empty()){return false;}name_ = name; return true;}
        inline bool setSurnames(string surnames) {if(surnames.empty()){return false;} surnames_ = surnames; return true;}
        inline bool setDni(string dni){if(dni.empty()){return false;}dni_=dni; return true;}
        inline bool setBirthday(string birthday) {if(birthday.empty()){return false;} birthday_ = birthday; return true;}

};
#endif