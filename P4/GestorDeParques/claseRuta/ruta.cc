#include "ruta.h"
#include "../claseSenderista/senderista.h"
#include "../claseSendero/sendero.h"
#include "../claseParque/parque.h"
#include "../systemFunctions/systemFunctions.h"

list<Sendero*> Ruta::getTraversedTrail() const 
{
   return traversedTrail_;
}

list<Senderista*> Ruta::getExcursionistRegistered() const 
{
   return excursionistRegistered_;
}

list<string> Ruta::getIncidences() const 
{
   return incidences_;
}

bool Ruta::setRouteParkID(int parkID, list<Parque*> &listOfParks){
    if (existPark(parkID, listOfParks)){
        parkID_ = parkID;
        return true;
    }
    return false;
}

bool Ruta::setRouteID(int const &parkID,int const &routeID){
   if(existRoute(parkID,routeID)){
      return false;
   }
   routeID_=routeID;
   return true;
}

bool Ruta::setDniMonitor(string const &dniMonitor){
   if (dniIsValid(dniMonitor)){
        dniMonitor_=dniMonitor;
        return true;  
    }
    
    return false;
}

bool Ruta::setDniMonitorAlternate(string const &dniMonitorAlternate){
   if (dniIsValid(dniMonitorAlternate)){
        dniMonitorAlternate_=dniMonitorAlternate;
        return true;  
    }
    
    return false;
}