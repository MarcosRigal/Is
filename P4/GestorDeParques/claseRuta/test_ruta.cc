#include "gtest/gtest.h"
#include "ruta.h"
#include <string>


TEST(Route, PlacesLeft){
    string DniMonitor="42690761R";
    list<int> Trails;
    Ruta r (DniMonitor,1,1,Trails,70);

    for(int i=0 ;i<50 ;i++){
        string dni="1111111i";
        r.setExcursionistDni(dni);
    }

    EXPECT_EQ(20,r.placesLeft());

}