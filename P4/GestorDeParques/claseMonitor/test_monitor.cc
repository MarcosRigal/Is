
#include <fstream>
#include <list>
#include "monitor.h"
#include "ruta.h"
#include "parque.h"
#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST(Monitor, notifyIncidentOnRoute) {
  string dni = "11111111";
  string email = "correo@gmail.com";
  string address = "calle adelfa nº1";

  Monitor m(dni, email, address, 611222333);      //Creamos un monitor con los datos de arriba

  list<Ruta*> listOfRoutes;                       //Creamos una lista de rutas
  list<int> traversedTrails = {1,2,3,4,5};        //Creamos una lista de senderos atravesados para poder crear la ruta
  Ruta r(dni, 1, 1, traversedTrails, 30);         //Creamos la ruta
  listOfRoutes.push_back(&r);                     //Añadimos la ruta a la lista de rutas


  string incidence1 = "Ha habido un desprendimiento";
  m.notifyIncidentOnRoute(listOfRoutes, incidence1, 1, 1);  //Añadimos la incidencia 1 a la ruta

  string incidence2 = "Un niño ha sufrido una caida";
  m.notifyIncidentOnRoute(listOfRoutes, incidence2, 1, 1);  //Añadimos la incidencia 2 a la ruta
  
  string incidence3 = "Una señora mayor se ha desmayado";
  m.notifyIncidentOnRoute(listOfRoutes, incidence3, 1, 1);  //Añadimos la incidencia 3 a la ruta


  EXPECT_FALSE(r.getIncidences().empty());                  //Comprobamos que la lista no está vacía
  EXPECT_EQ(r.getIncidences().size(), 3);                   //Comprobamos que el tamaño de la lista de incidencias sea 3
  EXPECT_EQ(r.getIncidences().begin(), incidence1);         //Comprobamos que la incidencia 1 es la primera
  EXPECT_EQ(r.getIncidences().end(), incidence3);           //Comprobamos que la incidencia 3 es la última



}
