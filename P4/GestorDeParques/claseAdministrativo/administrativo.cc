#include "administrativo.h"
#include "../claseParque/parque.h"
#include "../claseMonitor/monitor.h"

bool Administrativo::addPark(list<Parque*> &listOfParks, Parque p){
    for (auto i=listOfParks.begin(); i!=listOfParks.end(); i++){
        if(p.getParkID() == (*i)->getParkID()){
            return false;
        }
    }
    listOfParks.push_back(&p);
    return true;
}

bool Administrativo::deletePark(list<Parque*> &listOfParks, Parque p){
    for (auto i=listOfParks.begin(); i!=listOfParks.end(); i++){
        if(p.getParkID() == (*i)->getParkID()){
            listOfParks.remove(*i);
            return true;
        }
    }
}

Parque* Administrativo::viewPark(list<Parque*> &listOfParks, Parque p){
    for (auto i = listOfParks.begin(); i!=listOfParks.end(); i++){
        if(p.getParkID() == (*i)->getParkID()){
            return *i;
        }
    }
}

bool Administrativo::editPark(list<Parque*> &listOfParks, Parque p){
    for (auto i = listOfParks.begin(); i!=listOfParks.end(); i++){
        if(p.getParkID() == (*i)->getParkID()){
            /* Que hacemos aqui?? */
        }
    }
}