
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

  Monitor m(dni, email, address, 611222333);

  list<Ruta*> listOfRoutes;
  list<int> traversedTrails = {1,2,3,4,5};
  Ruta r(dni, 1, 1, traversedTrails, 30);
  listOfRoutes.push_back(&r);

  list<string> listOfIncidences;

  string incidence1 = "Ha habido un desprendimiento";
  listOfIncidences.push_back(incidence1);

  string incidence2 = "Un niño ha sufrido una caida aparatosa y hemos tenido que acudir a urgencias";
  listOfIncidences.push_back(incidence2);
  
  string incidence3 = "Una señora mayor se ha desmayado";
  listOfIncidences.push_back(incidence1);

  m.notifyIncidentOnRoute(listOfRoutes, incidence1, 1, 1);
  m.notifyIncidentOnRoute(listOfRoutes, incidence2, 1, 1);
  m.notifyIncidentOnRoute(listOfRoutes, incidence3, 1, 1);

  EXPECT_FALSE(r.getIncidences().empty());
  EXPECT_EQ(r.getIncidences().size(), 3);
  EXPECT_EQ(r.getIncidences(), listOfIncidences);


}
