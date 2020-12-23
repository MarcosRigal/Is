#include "administrativo.h"

bool Administrativo::addExcursionistToRoute(list<Ruta> &listOfRoutes, int parkID, int routeID, string dni)
{
   for(auto i = listOfRoutes.begin(); i != listOfRoutes.end(); i++)
   {
      if (i->getRouteParkID()==parkID && i->getRouteID()==routeID)
      {
         list<string> listOfDni = i->getExcursionistDNI();
         listOfDni.push_back(dni);
         i->setExcursionistDni(listOfDni);
         return true;
      }
   }
   return false;
}