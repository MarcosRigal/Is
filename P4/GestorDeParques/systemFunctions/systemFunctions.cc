#include "systemFunctions.h"
#include <iostream>

bool dniIsValid(string dni)
{
	if (dni.size()!=9)
   {
		return false;                   //Error si el dni introducido no tiene 9 caracteres
	}
	for (int i=0; i<8; i++)
   {
		if (!isdigit(dni[i]))
      {
			return false;               //Error si uno o varios de los 8 primeros elementos del dni introducido no son digitos
		}
	}
	dni[8]=toupper(dni[8]);             //Pasamos la letra del dni introducido a mayuscula
	int numero=stoi(dni);               //Casting a int
	char letras[]= "TRWAGMYFPDXBNJZSQVHLCKE";
	if (dni[8]!=letras[(numero%23)])
   {   //Formulas para comprobar si la letra se corresponde con los 8 digitos del dni introducido
		return false;                   //Error si la letra del dni introducido no se corresponde con sus 8 digitos
	}
	return true;                        //Se finalizara obteniendo que el dni introducido es correcto siempre que no se entre en ninguno de los if anteriores
}

void intro()
{
   system("clear");
   cout<<" ___________________________________________________\n";
   cout<<"|                                                   |\n";
   cout<<"|-------------- Gestor de Parques 1.0 --------------|\n";
   cout<<"|___________________________________________________|\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|           Bienvenido, pulse enter para            |\n";
   cout<<"|        acceder al menú de inicio de sesión:       |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|___________________________________________________|";
   getchar();
}

string login()
{
   string dni;
   int contador=0;
   while (!dniIsValid(dni))
   {
      system("clear");
      cout<<" ___________________________________________________\n";
      cout<<"|                                                   |\n";
      cout<<"|---------- Inicio de sesión en el sitema ----------|\n";
      cout<<"|___________________________________________________|\n";
      cout<<"\n   *Introduzca su DNI y pulse enter: ";
      cin>>dni;
      getchar();
      contador++;
      if (contador==3)
      {
         system("clear");
         cout<<"Error ha superado el numero de intentos permitidos\n";
         exit(-1);
      }
   }
   return dni;
}

int whoIs(string dni)
{
   if(existAdministrativo(dni)){return 0;}
   else if(existMonitor(dni)){return 1;}
   return -1;
}