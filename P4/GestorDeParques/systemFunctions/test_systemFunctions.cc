#include "gtest/gtest.h"
#include "systemFunctions.h"
#include <string>

using namespace std;

TEST(System, dniIsValid)
{
  string dni1="42690761R";                         //Dni correcto
  string dni2="85290310P";                         //Dni correcto
  string dni3="29941366A";                         //Dni incorrecto
  string dni4="78444443B";                         //Dni incorrecto

  EXPECT_TRUE(dniIsValid(dni1));                   //Comprobamos que el 1º Dni es correcto
  EXPECT_TRUE(dniIsValid(dni2));                   //Comprobamos que el 2º Dni es correcto
  EXPECT_FALSE(dniIsValid(dni3));                  //Comprobamos que el 3º Dni es incorrecto
  EXPECT_FALSE(dniIsValid(dni4));                  //Comprobamos que el 4º Dni es incorrecto

}

TEST(System, existAdministrativo) {

  list<Administrativo> listOfAdministrators;//Creamos la lista de administrativos
  
  //Creamos 3 administrativos y los añadimos a la lista

  Administrativo a("42690761R", "Anotnio", "13/03/2001", "Moruno Gracia", "amoruno21@gmail.com", "Calle casa");
  listOfAdministrators.push_back(a);

  Administrativo b("85290310P", "David", "15/03/2001", "Pérez Dueñas", "i92pedud@gmail.es", "Calle encinarejo");
  listOfAdministrators.push_back(b);

  Administrativo c("32731909B", "Marcos", "14/03/2001", "Rivera Gavilán", "riveragavilanmarcos@gmail.com", "Calle calle");
  listOfAdministrators.push_back(c);

  
  EXPECT_FALSE(listOfAdministrators.empty());                       //Comprobamos que la lista no está vacía
  EXPECT_EQ(listOfAdministrators.size(), 3);                        //Comprobamos que el tamaño de la lista de incidencias sea 3
  EXPECT_TRUE(existAdministrator(listOfAdministrators, "42690761R"));     //Comprobamos que el administrativo con dni1 este en la lista
  EXPECT_TRUE(existAdministrator(listOfAdministrators, "85290310P"));     //Comprobamos que el administrativo con dni2 este en la lista
  EXPECT_TRUE(existAdministrator(listOfAdministrators, "32731909B"));     //Comprobamos que el administrativo con dni3 este en la lista
  EXPECT_FALSE(existAdministrator(listOfAdministrators, "30481124Y"));    //Comprobamos que el administrativo con dni4 no este en la lista

}