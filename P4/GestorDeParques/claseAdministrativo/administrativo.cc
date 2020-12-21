#include "administrativo.h"
#include "../claseParque/parque.h"
#include "../claseSendero/sendero.h"
#include "../claseMonitor/monitor.h"
#include "../claseSenderista/senderista.h"
#include "../claseRuta/ruta.h"



/* Funciones de parque */

bool Administrativo::addPark(list<Parque*> &listOfParks, int parkID){
    for (auto i=listOfParks.begin(); i!=listOfParks.end(); i++){
        if(parkID == (*i)->getParkID()){
            return false;
        }
    }
    /* Añadimos el parque */
    return true;
}

bool Administrativo::deletePark(list<Parque*> &listOfParks, int parkID){
    for (auto i=listOfParks.begin(); i!=listOfParks.end(); i++){
        if(parkID == (*i)->getParkID()){
            listOfParks.remove(*i);
            return true;
        }
    }
    return false;
}

Parque* Administrativo::viewPark(list<Parque*> &listOfParks, int parkID){
    for (auto i = listOfParks.begin(); i!=listOfParks.end(); i++){
        if(parkID == (*i)->getParkID()){
            return *i;
        }
    }
}

bool Administrativo::editPark(list<Parque*> &listOfParks, int parkID){
    for (auto i = listOfParks.begin(); i!=listOfParks.end(); i++){
        if(parkID == (*i)->getParkID()){
            /* Que hacemos aqui?? */
        }
    }
}

/* Funciones de sendero */

bool Administrativo::addTrail(list<Sendero*> &listOfTrails, int parkID, int trailID){
    for (auto i = listOfTrails.begin(); i!=listOfTrails.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(trailID == (*i)->getTrailID()){
                return false;
            }
        }
    }

    /* Añadimos el sendero */
    return true;
}

bool Administrativo::deleteTrail(list<Sendero*> &listOfTrails, int parkID, int trailID){
    for (auto i = listOfTrails.begin(); i!=listOfTrails.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(trailID == (*i)->getTrailID()){
                listOfTrails.remove(*i);
                return true;
            }
        }
    }

    return false;
}

Sendero* viewTrail(list<Sendero*> &listOfTrails, int parkID, int trailID){
    for (auto i = listOfTrails.begin(); i!=listOfTrails.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(trailID == (*i)->getTrailID()){
                return *i;
            }
        }
    }
}

bool Administrativo::editTrail(list<Sendero*> &listOfTrails, int parkID, int trailID){
    for (auto i = listOfTrails.begin(); i!=listOfTrails.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(trailID == (*i)->getTrailID()){
                /* Que hacemos aqui?? */
            }
        }
    }
}

/* Funciones de monitor */

bool Administrativo::addMonitor(list<Monitor*> &listOfMonitors, string dni){
    for(auto i = listOfMonitors.begin(); i!=listOfMonitors.end(); i++){
        if(dni == (*i)->getDni()){
            return false;
        }
    }
    /* Añadimos el monitor */
    return true;
}

bool Administrativo::deleteMonitor(list<Monitor*> &listOfMonitors, string dni){
    for(auto i = listOfMonitors.begin(); i!=listOfMonitors.end(); i++){
        if(dni== (*i)->getDni()){
            listOfMonitors.remove(*i);
            return true;
        }
    }
    return false;
}

Monitor* Administrativo::viewMonitor(list<Monitor*> &listOfMonitors, string dni){
    for(auto i = listOfMonitors.begin(); i!=listOfMonitors.end(); i++){
        if(dni == (*i)->getDni()){
            return *i;
        }
    }  
}

bool Administrativo::editMonitor(list<Monitor*> &listOfMonitors, string dni){
    for(auto i = listOfMonitors.begin(); i!=listOfMonitors.end(); i++){
        if(dni == (*i)->getDni()){
            /* Que hacemos aqui?? */
        }
    }
}

/* Funciones de administrativo */

bool Administrativo::addAdministrator(list<Administrativo> &listOfAdministrators, string dni){
    for(auto i = listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){
        if(dni == i->getDni()){
            return false;
        }
    }
    /* Añadir el administrativo */
    return true;
}

bool Administrativo::deleteAdministrator(list<Administrativo> &listOfAdministrators, string dni){
    for(auto i = listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){
        if(dni == i->getDni()){
            listOfAdministrators.remove(*i);
            return true;
        }
    }
    return false;
}

Administrativo Administrativo::viewAdministrator(list<Administrativo> &listOfAdministrators, string dni){
    for(auto i = listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){
        if(dni == i->getDni()){
            return *i;
        }
    }
}

bool Administrativo::editAdministrator(list<Administrativo> &listOfAdministrators, string dni){
    for(auto i = listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){
        if(dni == i->getDni()){
            /* Que hacemos aqui?? */
        }
    }
    return false;
}

/* Funciones senderista */

bool Administrativo::addExcursionist(list<Senderista*> &listOfExcursionists, string dni){
    for(auto i = listOfExcursionists.begin(); i!=listOfExcursionists.end(); i++){
        if(dni == (*i)->getDni()){
            return false;
        }
    }
    /* Añadimos el senderista */
    return true;
}

bool Administrativo::deleteExcursionist(list<Senderista*> &listOfExcursionists, string dni){
    for(auto i = listOfExcursionists.begin(); i!=listOfExcursionists.end(); i++){
        if(dni == (*i)->getDni()){
            listOfExcursionists.remove(*i);
            return true;
        }
    }
    return false;
}

Senderista* Administrativo::viewExcursionist(list<Senderista*> &listOfExcursionists, string dni){
    for(auto i = listOfExcursionists.begin(); i!=listOfExcursionists.end(); i++){
        if(dni == (*i)->getDni()){
            return *i;
        }
    }
}

bool Administrativo::editExcursionist(list<Senderista*> &listOfExcursionists, string dni){
    for(auto i = listOfExcursionists.begin(); i!=listOfExcursionists.end(); i++){
        if(dni == (*i)->getDni()){
            /* Que hacemos aqui */
        }
    }
}

/* Funciones añadir y borrar senderista de una ruta */

bool Administrativo::addExcursionistToRoute(list<Ruta*> &listOfRoutes, int parkID, int routeID, string dni){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(routeID== (*i)->getRouteID()){
                for(auto j = (*i)->getExcursionistDNI().begin(); j!=(*i)->getExcursionistDNI().end(); j++){
                    if(*j == dni){
                        return false;
                    }
                } 
            }
        }
    }
    /* Añadimos el senderista a la ruta */
    return true;
}

bool Administrativo::deleteExcursionistFromRoute(list<Ruta*> &listOfRoutes, int parkID, int routeID, string dni){
    for(auto i = listOfRoutes.begin(); i!=listOfRoutes.end(); i++){
        if(parkID == (*i)->getParkID()){
            if(routeID == (*i)->getRouteID()){
                for(auto j = (*i)->getExcursionistDNI().begin(); j!=(*i)->getExcursionistDNI().end(); j++){
                    if(*j == dni){
                        /* Borramos el senderista de la ruta */
                        return true;
                    }
                } 
            }
        }
    }
    return false;
}