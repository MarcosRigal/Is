#include "trabajador.h"
#include "../claseParque/parque.h"
#include "../claseRuta/ruta.h"

bool Trabajador::addRoute(list<Ruta*> &listOfRoutes, int parkID, int routeID){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(routeID == (*i)->getRouteID()){
                return false;
            }
        }
    }
    /* Añadimos la ruta */
    return true;
}

bool Trabajador::deleteRoute(list<Ruta*> &listOfRoutes, int parkID, int routeID){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(routeID == (*i)->getRouteID()){
                listOfRoutes.remove(*i);
                return true;
            }
        }
    }
    return false;
}

Ruta* Trabajador::viewRoute(list<Ruta*> &listOfRoutes, int parkID, int routeID){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(routeID== (*i)->getRouteID()){
                return *i;
            }
        }
    }
}

bool Trabajador::editRoute(list<Ruta*> &listOfRoutes, int parkID, int routeID){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(routeID == (*i)->getRouteID()){
                /* Que hacemos aqui?? */
            }
        }
    }
    return false;
}