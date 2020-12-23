#include "monitor.h"
#include <fstream>
using namespace std;

bool Monitor::notifyIncidentOnRoute(list<Ruta> &listOfRoutes, int routeParkID, int routeID, string incidence)
{
   for(auto i = listOfRoutes.begin(); i != listOfRoutes.end(); i++)
   {
      if (i->getRouteParkID()==routeParkID && i->getRouteID()==routeID)
      {
         list<string> listOfIncidences = i->getIncidences();
         listOfIncidences.push_back(incidence);
         i->setIncidences(listOfIncidences);
         return true;
      }
   }
   return false;
}

void Monitor::getRouteReport(list<Ruta> listOfRoutes, int routeParkID, int routeID)
{
   for(auto i = listOfRoutes.begin(); i != listOfRoutes.end(); i++)
   {
      if (i->getRouteParkID()==routeParkID && i->getRouteID()==routeID)
      {
         ofstream f((to_string(routeParkID)+"-"+to_string(routeID)+".txt")); //Creamos el puntero para abrir el fichero en modo escritura y lo abrimos introduciendo el nombre del fichero que queremos abrir
         if (!f) //comprobamos que el fichero se haya abierto correctamente
         {
           cout<<"Error al abrir el archivo\n"; //Como no se ha abierto correctamente informamos al usuario de que ha habido un error
           EXIT_FAILURE; //Salimos y devolviendo una señal de error
         }
         f<<i->getRouteParkID()<<','<<i->getRouteID()<<','<<i->getName()<<','<<i->getDniMonitor()<<','<<i->getDniMonitorAlternate()<<','<<i->getLength()<<','<<i->getModality()<<','<<i->getNumberOfPlaces()<<','<<i->getDuration()<<','<<i->getExclusiveness();
         list<int> idTraversedTrails = i->getTraversedTrail();
         for (auto j = idTraversedTrails.begin(); j != idTraversedTrails.end(); j++)
         {
            f<<","<<*j;
         }
         list<string> excursionistDNI = i->getExcursionistDNI();
         string dni;
         int n = excursionistDNI.size();
         for (int k = 0; k< n; k++)
         {
            dni=excursionistDNI.front();
            excursionistDNI.pop_front();
            f<<","<<dni;
         }
         if (!i->getAdaptations().empty())
         {
            f<<i->getAdaptations();
         } 
         f<<'\n';
         f.close();//Como ya hemos acabado con el fichero lo cerramos
      }
   }
}