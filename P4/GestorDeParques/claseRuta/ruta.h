#ifndef RUTA_H
#define RUTA_H
#include <string>
#include <list>
#include "senderista.h"
#include "sendero.h"
#include "ruta.h"
using namespace std;

class Ruta{
    private:
   
    string adaptations_;
    string dniMonitor_;
    string dniMonitorAlternate_;
    int duration_;
    bool exclusiveness_;
    float length_;
    string modality_;
    string name_;
    int numberOfPlaces_;
    list <Senderista> excursionistRegistered_;
    int parkID_;
    int routeID_;
    list <Sendero> traversedTrail_;
    list <Incidence> incidences_;


    public:

    Ruta(string dniMonitor,int parkID, int routeID, list traversedTrail, int numberOfPlaces);
    
    inline string getAdaptations() const {return adaptations_;};
    inline string getDniMonitor() const {return dniMonitor_;};
    inline string getDniMonitorAlternate() const {return dniMonitorAlternate_;};
    inline int getDuration() const {return duration_;};
    inline bool getExclusiveness() const {return exclusiveness_;};
    inline list<Indicende> getIncidences() const {return list<Indicence>;};
    inline float getLength() const {return length_;};
    inline string getModality() const {return modality_;};
    inline string getName() const {return name_;};
    inline int getNumberOfPlaces() const {return numberOfPlaces_;};
    inline list<Excursionist> getExcursionistRegistered() const {return list<Excursionist>;};
    inline int getParkID() const {return parkID_;};
    inline int getRouteID() const {return routeID_;};
    inline list<Trails> getTraversedTrail() const {return list<Trails>;};

};
#endif