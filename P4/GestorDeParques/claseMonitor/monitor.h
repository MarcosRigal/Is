#ifndef MONITOR_H
#define MONITOR_H 
#include <iostream>
#include "../claseTrabajador/trabajador.h"
using namespace std;

class Parque;

class Monitor : public Trabajador
{
    private:

        int phoneNumber_;
        float workedHours_;
        bool status_;

    public:

        Monitor(string dni, string email, string address, int phoneNumber) : Trabajador(dni, email, address) {setPhoneNumber(phoneNumber);status_=true; workedHours_=0;};
        
        int getPhoneNumber() const { return phoneNumber_; }
        float getWorkedHours() const { return workedHours_; }
        bool getStatus() const { return status_; }

        bool setPhoneNumber(int phoneNumber){if(phoneNumber<=0){return false;} phoneNumber_=phoneNumber; return true;}
        bool setWorkedHours(float workedHours){if(workedHours<=0){return false;} workedHours_=workedHours; return true;};
        bool setStatus(bool status){status_=status;return true;};

        bool notifyIncidentOnRoute(list<Ruta*> &listOfRoutes, string incidence, int parkID, int routeID);
        void getRouteReport(list<Ruta*> &listOfRoutes, int parkID, int routeID);

};
#endif