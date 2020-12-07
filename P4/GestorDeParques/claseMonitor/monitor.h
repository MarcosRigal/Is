#ifndef MONITOR_H
#define MONITOR_H 
#include <iostream>
#include <trabajador.h>
using namespace std;

class Monitor{
    private:

        int phoneNumber_;
        float workedHours_;
        bool status_;

    public:

        Monitor(int phoneNumber, Trabajador trabajador);
        
        int getPhoneNumber() const { return phoneNumber_; }
        float getWorkedHours() const { return workedHours_; }
        bool getStatus() const { return status_; }

        /* Los sets deberian ser void????? */

        bool setPhoneNumber(int phoneNumber);
        bool setWorkedHours(float workedHours);
        bool setStatus(bool status);

        bool notifyIncidentOnRoute(int parkID, int routeID, string incidence);
        void getRouteReport(int parkID, int routeID);


};
#endif