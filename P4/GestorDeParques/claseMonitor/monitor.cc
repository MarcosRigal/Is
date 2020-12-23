#include "monitor.h"

bool Monitor::notifyIncidentOnRoute(list<Ruta> &listOfRoutes, int parkID, int routeID, string incidence)
{
   for(auto i = listOfRoutes.begin(); i != listOfRoutes.end(); i++)
   {
      if (i->getParkID()==parkID && i->getRouteID()==routeID)
      {
         list<string> listOfIncidences = i->getIncidences();
         listOfIncidences.push_back(incidence);
         i->setIncidences(listOfIncidences);
         return true;
      }
   }
   return false;
}