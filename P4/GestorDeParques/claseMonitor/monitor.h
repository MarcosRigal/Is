#ifndef MONITOR_H
#define MONITOR_H 
#include <iostream>
#include "../claseTrabajador/trabajador.h"

using namespace std;

class Monitor : public Trabajador
{
    private:

        int phoneNumber_;
        float workedHours_;
        bool status_;

    public:

        Monitor(string dni, string name, string birthday, string surnames, string email, string address, int phoneNumber) : Trabajador(dni, name, birthday, surnames, email, address) {setPhoneNumber(phoneNumber);setStatus(true); setWorkedHours(0);}
        
        inline int getPhoneNumber() { return phoneNumber_;}
        inline float getWorkedHours() { return workedHours_;}
        inline bool getStatus() { return status_;}

        inline bool setPhoneNumber(int phoneNumber){if(phoneNumber<100000000 || phoneNumber>999999999){return false;} phoneNumber_=phoneNumber; return true;}
        inline bool setWorkedHours(float workedHours){if(workedHours<0){return false;} workedHours_=workedHours; return true;}
        inline bool setStatus(bool status){status_=status;return true;}

        bool notifyIncidentOnRoute(list<Ruta> &listOfRoutes, int routeParkID, int routeID, string incidence);
        void getRouteReport(list<Ruta> listOfRoutes, int routeParkID, int routeID);

};
#endif