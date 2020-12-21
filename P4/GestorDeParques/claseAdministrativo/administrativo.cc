#include "administrativo.h"
#include "../claseParque/parque.h"
#include "../claseSendero/sendero.h"
#include "../claseMonitor/monitor.h"

/* Funciones de parque */

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
    return false
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

/* Funciones de sendero */

bool Administrativo::addTrail(list<Sendero*> &listOfTrails, Sendero s){
    for (auto i = listOfTrails.begin(); i!=listOfTrails.end(); i++){
        if(s.getParkID() == (*i)->getParkID()){
            if(s.getTrailID() == (*i)->getTrailID()){
                return false;
            }
        }
    }

    listOfTrails.push_back(&s);
    return true;
}

bool Administrativo::deleteTrail(list<Sendero*> &listOfTrails, Sendero s){
    for (auto i = listOfTrails.begin(); i!=listOfTrails.end(); i++){
        if(s.getParkID() == (*i)->getParkID()){
            if(s.getTrailID() == (*i)->getTrailID()){
                listOfTrails.remove(*i);
                return true;
            }
        }
    }

    return false;
}

Sendero* viewTrail(list<Sendero*> &listOfTrails, Sendero s{
    for (auto i = listOfTrails.begin(); i!=listOfTrails.end(); i++){
        if(s.getParkID() == (*i)->getParkID()){
            if(s.getTrailID() == (*i)->getTrailID()){
                return *i;
            }
        }
    }
}

bool Administrativo::editTrail(list<Sendero*> &listOfTrails, Sendero s){
    for (auto i = listOfTrails.begin(); i!=listOfTrails.end(); i++){
        if(s.getParkID() == (*i)->getParkID()){
            if(s.getTrailID() == (*i)->getTrailID()){
                /* Que hacemos aqui?? */
            }
        }
    }
}

/* Funciones de monitor */

bool Administrativo::addMonitor(list<Monitor*> &listOfMonitors, Monitor m){
    for(auto i = listOfMonitors.begin(); i!=listOfMonitors.end(); i++){
        if(m.getDni() == (*i)->getDni()){
            return false;
        }
    }
    listOfMonitors.push_back(&m);
    return true;
}

bool Administrativo::deleteMonitor(list<Monitor*> &listOfMonitors, Monitor m){
    for(auto i = listOfMonitors.begin(); i!=listOfMonitors.end(); i++){
        if(m.getDni() == (*i)->getDni()){
            listOfMonitors.remove(*i);
            return true;
        }
    }
    return false;
}

Monitor* Administrativo::viewMonitor(list<Monitor*> &listOfMonitors, Monitor m){
    for(auto i = listOfMonitors.begin(); i!=listOfMonitors.end(); i++){
        if(m.getDni() == (*i)->getDni()){
            return *i;
        }
    }  
}

bool Administrativo::editMonitor(list<Monitor*> &listOfMonitors, Monitor m){
    for(auto i = listOfMonitors.begin(); i!=listOfMonitors.end(); i++){
        if(m.getDni() == (*i)->getDni()){
            /* Que hacemos aqui?? */
        }
    }
}

/* Funciones de administrativo */

bool Administrativo::addAdministrator(list<Administrativo> &listOfAdministrators, Administrativo a){
    for(auto i = listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){
        if(a.getDni() == i->getDni()){
            return false;
        }
    }
    listOfAdministrators.push_back(a);
    return true;
}

bool Administrativo::deleteAdministrator(list<Administrativo> &listOfAdministrators, Administrativo a){
    for(auto i = listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){
        if(a.getDni() == i->getDni()){
            listOfAdministrators.remove(*i);
            return true;
        }
    }
    return false;
}

Administrativo Administrativo::viewAdministrator(list<Administrativo> &listOfAdministrators, Administrativo a){
    for(auto i = listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){
        if(a.getDni() == i->getDni()){
            return *i;
        }
    }
}

bool Administrativo::editAdministrator(list<Administrativo> &listOfAdministrators, Administrativo a){
    for(auto i = listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){
        if(a.getDni() == i->getDni()){
            /* Que hacemos aqui?? */
        }
    }
    return false;
}