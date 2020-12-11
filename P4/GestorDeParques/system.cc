#include "../GestorDeParques/systemFunctions/systemFunctions.h"
#include "../GestorDeParques/claseParque/parque.h"
#include "../GestorDeParques/clasePersona/persona.h"
#include "../GestorDeParques/claseSenderista/senderista.h"
#include "../GestorDeParques/claseAdministrativo/administrativo.h"
#include "../GestorDeParques/claseMonitor/monitor.h"
#include <stdio.h>

int main()
{
   system("clear");
   list<Parque*> listOfParks;
   list<Senderista> listOfExcursionists;
   list<Administrativo> listOfMonitors;
   list<Monitor> listOfAdministrators;

   Administrativo A("32731909B", "riveragavilanmarcos@gmail.com", "C\\ Calle 5,3º 2");
   cout<<"DNI del monitor: "<<A.getDni()<<" Correo del monitor: "<<A.getEmail()<<" Dirección del monitor: "<<A.getAddress()<<"\n";
   return 0;
}
