#include "../GestorDeParques/systemFunctions/systemFunctions.h"
#include "../GestorDeParques/claseParque/parque.h"
#include "../GestorDeParques/clasePersona/persona.h"
#include "../GestorDeParques/claseSenderista/senderista.h"
#include "../GestorDeParques/claseAdministrativo/administrativo.h"
#include "../GestorDeParques/claseMonitor/monitor.h"
#include <stdio.h>

bool existExcursionist(string dni);
bool existRoute(int parkID, int routeID);
bool existTrail(int parkID, int trailID);
bool existMonitor(string dni, list<Monitor*> listOfMonitors);

bool existAdministrator(string dni, list<Administrativo*> listOfAdministrators){
	for (auto i=listOfAdministrators.begin(); i!=listOfAdministrators.end(); i++){		//Iteramos la lista
		if(((*i)->getDni())==dni){														//Si el dni pasado como parametro a la funcion es igual que el dni del elemento i de la lista, el administrador existe
			return true;
		}
	}
	return false;
}

bool existPark(int parkID, list<Parque*> &listOfParks)
{
	return false;
}


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
