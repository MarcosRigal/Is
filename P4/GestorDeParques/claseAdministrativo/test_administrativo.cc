#include "gtest/gtest.h"
#include "administrativo.h"

TEST(Administrativo, addExcursionistToRoute)
{
   Administrativo a("32731909B", "Marcos", "14/03/2001", "Rivera Gavilán", "riveragavilanmarcos@gmail.com", "Calle calle");
   
   list<Ruta> listOfRoutes;//Creamos una lista de rutas
   list<int> traversedTrails = {1,2,3,4,5};//Creamos una lista de senderos atravesados por la ruta
   Ruta r(1, 1, "Ruta1", "42690761R", "85290310P", 5.0,"Bicicleta", 70, 2.5, traversedTrails, false);
   listOfRoutes.push_back(r);

   Senderista s("30481124Y", "Antonio", "14/03/2001", "Moruno Gracia", 622591804);

   a.addExcursionistToRoute(listOfRoutes, 1, 1, s.getDni());

   auto i = listOfRoutes.begin();
   list<string> listOfDnis = i->getExcursionistDNI();

   EXPECT_EQ(listOfDnis.front(), s.getDni());
}