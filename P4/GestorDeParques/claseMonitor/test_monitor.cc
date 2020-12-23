#include "gtest/gtest.h"
#include "monitor.h"
#include <string>
#include <list>
#include <fstream>

using namespace std;

TEST(Monitor, notifyIncidentOnRoute) {

  Monitor m("32731909B", "Marcos", "14/03/2001", "Rivera Gavilán", "riveragavilanmarcos@gmail.com", "Calle calle", 622591804);//Creamos un monitor

  list<Ruta> listOfRoutes;//Creamos una lista de rutas
  list<int> traversedTrails = {1,2,3,4,5};//Creamos una lista de senderos atravesados por la ruta
  Ruta r(1, 1, "Ruta1", "32731909B", "30481124Y", 5.0,"Bicicleta", 70, 2.5, traversedTrails, false);
  
  listOfRoutes.push_back(r);//Añadimos la ruta a la lista de rutas


  string incidence1 = "Ha habido un desprendimiento";
  m.notifyIncidentOnRoute(listOfRoutes, 1, 1, incidence1);  //Añadimos la incidencia 1 a la ruta

  string incidence2 = "Un niño ha sufrido una caida";
  m.notifyIncidentOnRoute(listOfRoutes, 1, 1, incidence2);  //Añadimos la incidencia 2 a la ruta
  
  string incidence3 = "Una señora mayor se ha desmayado";
  m.notifyIncidentOnRoute(listOfRoutes, 1, 1, incidence3);  //Añadimos la incidencia 3 a la ruta
  auto i = listOfRoutes.begin();
  list<string> listOfIncidences = i->getIncidences();
  string incidenceF = listOfIncidences.front();
  string incidenceB = listOfIncidences.back();
  EXPECT_FALSE(i->getIncidences().empty());                  //Comprobamos que la lista no está vacía
  EXPECT_EQ(i->getIncidences().size(), 3);                   //Comprobamos que el tamaño de la lista de incidencias sea 3
  EXPECT_EQ(incidenceF, incidence1);         //Comprobamos que la incidencia 1 es la primera
  EXPECT_EQ(incidenceB, incidence3);           //Comprobamos que la incidencia 3 es la última

}

TEST(Monitor, getRouteReport)
{
  Monitor m("32731909B", "Marcos", "14/03/2001", "Rivera Gavilán", "riveragavilanmarcos@gmail.com", "Calle calle", 622591804);//Creamos un monitor

  list<Ruta> listOfRoutes;//Creamos una lista de rutas
  list<int> traversedTrails = {1,2,3,4,5};//Creamos una lista de senderos atravesados por la ruta
  Ruta r(1, 1, "Ruta1", "32731909B", "30481124Y", 5.0,"Bicicleta", 70, 2.5, traversedTrails, false);
  
  list<string> excursionistDNI;
  for (int i = 0; i < 3; i++)
  {
      excursionistDNI.push_back("11111111A");
  }
  r.setExcursionistDni(excursionistDNI);

  listOfRoutes.push_back(r);//Añadimos la ruta a la lista de rutas
  
  m.getRouteReport(listOfRoutes, 1, 1);


  ifstream f(("1-1.txt")); //Creamos el puntero para abrir el fichero en modo lectura y lo abrimos introduciendo el nombre del fichero que queremos abrir para ello concatenamos el DNI del jugador con la extensión.txt
  EXPECT_TRUE(f);
  string cadena;
  int routeParkID;
  int routeID;
  getline(f, cadena, ',');
  routeParkID = stoi(cadena);
  getline(f, cadena, ',');
  routeID = stoi(cadena); 
  getline(f, cadena, ',');
  f.close(); //Como ya no hay nada mas que leer cerramos el fichero
  EXPECT_EQ(routeParkID,1);
  EXPECT_EQ(routeID,1);
}
