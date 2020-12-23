#include "gtest/gtest.h"
#include "ruta.h"
#include <string>
#include <list>

TEST(Route, PlacesLeft)
{
    list<int> traversedTrails = {1,2,3,4,5};//Creamos una lista de senderos atravesados por la ruta
    Ruta r(1, 1, "Ruta1", "32731909B", "30481124Y", 5.0,"Bicicleta", 70, 2.5, traversedTrails,false);
    list<string> excursionistDNI;
    for (int i = 0; i < 50; i++)
    {
        excursionistDNI.push_back("11111111A");
    }
    r.setExcursionistDni(excursionistDNI);

    EXPECT_EQ(20,r.placesLeft());
}