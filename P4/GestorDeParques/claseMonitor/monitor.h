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

        Monitor(string dni, string email, string address, int phoneNumber) : Trabajador(dni, email, address) {setPhoneNumber(phoneNumber);status_=true; workedHours_=0;};
        
        int getPhoneNumber() const { return phoneNumber_; }
        float getWorkedHours() const { return workedHours_; }
        bool getStatus() const { return status_; }

        bool setPhoneNumber(int phoneNumber);
        bool setWorkedHours(float workedHours);
        bool setStatus(bool status);

        bool notifyIncidentOnRoute(int parkID, int routeID, string incidence);
        void getRouteReport(int parkID, int routeID);

};
#endif