#include "monitor.h"
#include <fstream>
#include "../claseRuta/ruta.h"

bool Monitor::notifyIncidentOnRoute(list<Ruta*> &listOfRoutes, string incidence, int parkID, int routeID){
    for (auto i=listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if ((*i)->getParkID() == parkID && (*i)->getRouteID() == routeID){
            (*i)->setIncidences(incidence);
            return true;
        }
    }
    return false;
}

void Monitor::getRouteReport(list<Ruta*> &listOfRoutes, int parkID, int routeID){
    std::fstream f;
    f.open(routeID + ".txt", std::ios::out);
    for (auto i= listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        f<<(*i)->getAdaptations()<<","<<
        (*i)->getDniMonitor()<<","<<
        (*i)->getDniMonitorAlternate()<<","<<
        (*i)->getDuration()<<","<<
        (*i)->getExclusiveness()<<","<<
        (*i)->getIncidences()<<","<<
        (*i)->getLength()<<","<<
        (*i)->getModality()<<","<<
        (*i)->getName()<<","<<
        (*i)->getNumberOfPlaces()<<","<<
        (*i)->getExcursionistDNI()<<","<<
        (*i)->getParkID()<<","<<
        (*i)->getRouteID()<<","<<
        (*i)->getTraversedTrail()<<","<<std::endl;
    }
    f.close();
}


