#include <fstream>
#include <list>
#include "administrativo.h"
#include "systemFunctions.h"
#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST(System, existAdministrativo) {

  list<Administrativo*> listOfAdministrators;                       //Creamos la lista de administrativos
  
  //Creamos 3 administrativos y los añadimos a la lista
  string dni1 = "1111111";
  string email1 = "xxx@gmail.com";
  string address1 = "calle oso nº1";
  Administrativo a(dni1, email1, address1);
  listOfAdministrators.push_back(&a);

  string dni2 = "2222222";
  string email2 = "yyy@gmail.com";
  string address2 = "calle puma nº1";
  Administrativo b(dni2, email2, address2);
  listOfAdministrators.push_back(&b);

  string dni3 = "3333333";
  string email3 = "zzz@gmail.com";
  string address3 = "calle tigre nº1";
  Administrativo c(dni3, email3, address3);
  listOfAdministrators.push_back(&c);

  
  EXPECT_FALSE(listOfAdministrators.empty());                       //Comprobamos que la lista no está vacía
  EXPECT_EQ(listOfAdministrators.size(), 3);                        //Comprobamos que el tamaño de la lista de incidencias sea 3
  EXPECT_TRUE(existAdministrativo(listOfAdministrators, dni1));     //Comprobamos que el administrativo con dni1 este en la lista
  EXPECT_TRUE(existAdministrativo(listOfAdministrators, dni2));     //Comprobamos que el administrativo con dni2 este en la lista
  EXPECT_TRUE(existAdministrativo(listOfAdministrators, dni3));     //Comprobamos que el administrativo con dni3 este en la lista

  string dni4 = "4444444";
  EXPECT_FALSE(existAdministrativo(listOfAdministrators, dni4));    //Comprobamos que el administrativo con dni4 no este en la lista
  



}

TEST(System, DNIIsValid){
  string dni1="42690761R";                         //Dni correcto
  string dni2="85290310P";                         //Dni correcto
  string dni3="29941366A";                         //Dni incorrecto
  string dni4="78444443B";                         //Dni incorrecto

  EXPECT_TRUE(dniIsValid(dni1));                   //Comprobamos que el 1º Dni es correcto
  EXPECT_TRUE(dniIsValid(dni2));                   //Comprobamos que el 2º Dni es correcto
  EXPECT_FALSE(dniIsValid(dni3));                  //Comprobamos que el 3º Dni es incorrecto
  EXPECT_FALSE(dniIsValid(dni4));                  //Comprobamos que el 4º Dni es incorrecto

}
