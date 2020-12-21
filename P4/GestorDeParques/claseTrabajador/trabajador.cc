#include "trabajador.h"
#include "../claseParque/parque.h"
#include "../claseRuta/ruta.h"

bool Trabajador::addRoute(list<Ruta*> &listOfRoutes, Ruta r){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(r.getParkID() == (*i)->getParkID()){
            if(r.getRouteID() == (*i)->getRouteID()){
                return false;
            }
        }
    }
    listOfRoutes.push_back(&r);
    return true;
}

bool Trabajador::deleteRoute(list<Ruta*> &listOfRoutes, Ruta r){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(r.getParkID() == (*i)->getParkID()){
            if(r.getRouteID() == (*i)->getRouteID()){
                listOfRoutes.remove(*i);
                return true;
            }
        }
    }
    return false;
}

Ruta* Trabajador::viewRoute(list<Ruta*> &listOfRoutes, Ruta r){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(r.getParkID() == (*i)->getParkID()){
            if(r.getRouteID() == (*i)->getRouteID()){
                return *i;
            }
        }
    }
}

bool Trabajador::editRoute(list<Ruta*> &listOfRoutes, Ruta r){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(r.getParkID() == (*i)->getParkID()){
            if(r.getRouteID() == (*i)->getRouteID()){
                /* Que hacemos aqui?? */
            }
        }
    }
    return false;
}