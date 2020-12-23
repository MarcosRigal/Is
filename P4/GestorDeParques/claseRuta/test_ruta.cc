#include "gtest/gtest.h"
#include "ruta.h"
#include <string>


TEST(Route, PlacesLeft)
{
    Ruta r(1, 1, "Ruta1", "32731909B", "30481124Y", "Bicicleta", 70, 2.5, false);
    list<string> excursionistDNI;
    for (int i = 0; i < 50; i++)
    {
        excursionistDNI.push_back("11111111A");
    }
    r.setExcursionistDni(excursionistDNI);

    EXPECT_EQ(20,r.placesLeft());
}