#include "systemFunctions.h"
#include "../claseParque/parque.h"
#include "../claseMonitor/monitor.h"
#include "../claseSenderista/senderista.h"
#include "../claseAdministrativo/administrativo.h"

bool dniIsValid(string dni){
	if (dni.size()!=9){
		return false;                   //Error si el dni introducido no tiene 9 caracteres
	}

	for (int i=0; i<8; i++){
		if (!isdigit(dni[i])){
			return false;               //Error si uno o varios de los 8 primeros elementos del dni introducido no son digitos
		}
	}

	dni[8]=toupper(dni[8]);             //Pasamos la letra del dni introducido a mayuscula
	int numero=stoi(dni);               //Casting a int
	char letras[]= "TRWAGMYFPDXBNJZSQVHLCKE";
	if (dni[8]!=letras[(numero%23)]){   //Formulas para comprobar si la letra se corresponde con los 8 digitos del dni introducido
		return false;                   //Error si la letra del dni introducido no se corresponde con sus 8 digitos
	}
	
	return true;                        //Se finalizara obteniendo que el dni introducido es correcto siempre que no se entre en ninguno de los if anteriores
}

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

