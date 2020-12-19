#include "ruta.h"
#include "../claseParque/parque.h"
#include "../systemFunctions/systemFunctions.h"

list<string> Ruta::getIncidences() const 
{
   return incidences_;
}

bool Ruta::setRouteParkID(int parkID, list<int> &listOfParks){
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

int Ruta::placesLeft(){
   int contador;                                                              //Variable en la que guardaremos el numero de senderistas que hay apuntados
   contador = excursionistDNI_.size();
   return (numberOfPlaces_ - contador);                                       //Devolvemos el numero de plazas disponibles (plazas totales - senderistas apuntados)
}