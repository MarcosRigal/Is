#include "systemFunctions.h"
#include <iostream>

void clear(){//Funcion que limpia la terminal en función del sistema operativo que estemos utilizando
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

bool dniIsValid(string dni)//Función que comprueba si un dni es válido
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

bool existAdministrativo(string dni)//Función que comprueba si un administrativo existe en el sistema
{
   return false;
}

bool existMonitor(string dni)//Función que comprueba si un monitor existe en el sistema
{
   return true;
}

void intro()//Función que imprime el menú de inicio
{
   clear();
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

string login()//Función que imprime la pantalla de inicio de sesión
{
   string dni;
   int contador=0;
   clear();
   cout<<" ___________________________________________________\n";
   cout<<"|                                                   |\n";
   cout<<"|---------- Inicio de sesión en el sitema ----------|\n";
   cout<<"|___________________________________________________|\n";
   cout<<"\n   *Introduzca su DNI y pulse enter: ";
   cin>>dni;
   getchar();
   contador++;
   while (!dniIsValid(dni))
   {
      if (3==contador++)
      {
         clear();
         cout<<" ___________________________________________________\n";
         cout<<"|                                                   |\n";
         cout<<"|---------- Inicio de sesión en el sitema ----------|\n";
         cout<<"|___________________________________________________|\n";
         cout<<"|                                                   |\n";
         cout<<"|                                                   |\n";
         cout<<"|                                                   |\n";
         cout<<"|                      Error,                       |\n";
         cout<<"|     ha superado el numero de intentos permitido   |\n";
         cout<<"|                                                   |\n";
         cout<<"|                                                   |\n";
         cout<<"|                                                   |\n";
         cout<<"|___________________________________________________|\n";
         exit(-1);
      }
      clear();
      cout<<" ___________________________________________________\n";
      cout<<"|                                                   |\n";
      cout<<"|---------- Inicio de sesión en el sitema ----------|\n";
      cout<<"|___________________________________________________|\n";
      cout<<"\n     Error ha introducido un DNI no valido\n";
      cout<<"   *Introduzca su DNI y pulse enter: ";
      cin>>dni;
      getchar();
   }
   return dni;
}

void shutDown()
{
   clear();
   cout<<" ___________________________________________________\n";
   cout<<"|                                                   |\n";
   cout<<"|--------------- Apagando el sistema ---------------|\n";
   cout<<"|___________________________________________________|\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|  El sistema se está apagando, por favor espere    |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|___________________________________________________|\n";
   exit(-1);  
}

int whoIs(string dni)//Función que nos indica si el dni introducido es de un monitor o de un administrador
{
   if(existAdministrativo(dni)){return 0;}
   else if(existMonitor(dni)){return 1;}
   return -1;
}

int menuAdministrativo()//Función que imprime el menú de los administrativos
{
   string select;
   clear();
      cout<<" _____________________________________________________\n";
      cout<<"|                                                     |\n";
      cout<<"|--------------  Menú de administrativo: -------------|\n";
      cout<<"|_____________________________________________________|\n";
      cout<<"|                                                     |\n";
      cout<<"|Pulsa 1 para acceder a la gestión de los parques     |\n";
      cout<<"|Pulsa 2 para acceder a la gestión de los senderos    |\n";
      cout<<"|Pulsa 3 para acceder a la gestión de las rutas       |\n";
      cout<<"|Pulsa 4 para acceder a la gestión de los senderistas |\n";
      cout<<"|Pulsa 5 acceder a la gestión de los trabajadores     |\n";
      cout<<"|Pulsa 0 para salir del programa                      |\n";
      cout<<"|_____________________________________________________|\n";
   cout<<"\nSu elección: ";
   cin >> select;
   getchar();
   while (!isdigit(select[0]) || stoi(select)<0 || stoi(select) > 5)
   {
      clear();
      cout<<" _____________________________________________________\n";
      cout<<"|                                                     |\n";
      cout<<"|--------------  Menú de administrativo: -------------|\n";
      cout<<"|_____________________________________________________|\n";
      cout<<"|                                                     |\n";
      cout<<"|Pulsa 1 para acceder a la gestión de los parques     |\n";
      cout<<"|Pulsa 2 para acceder a la gestión de los senderos    |\n";
      cout<<"|Pulsa 3 para acceder a la gestión de las rutas       |\n";
      cout<<"|Pulsa 4 para acceder a la gestión de los senderistas |\n";
      cout<<"|Pulsa 5 acceder a la gestión de los trabajadores     |\n";
      cout<<"|Pulsa 0 para salir del programa                      |\n";
      cout<<"|_____________________________________________________|\n";
      cout<<"\nError por favor escoja una opción válida: ";
      cin >> select;
      getchar();
   }
   return stoi(select);
}

int menuMonitor()//Función que imprime el menú de los monitores
{
   string select;
   clear();
      cout<<" _____________________________________________________\n";
      cout<<"|                                                     |\n";
      cout<<"|-----------------  Menú de monitor: -----------------|\n";
      cout<<"|_____________________________________________________|\n";
      cout<<"|                                                     |\n";
      cout<<"|Pulsa 1 para acceder a la gestión de las rutas       |\n";
      cout<<"|Pulsa 2 para acceder a la gestión de las incidencias |\n";
      cout<<"|Pulsa 3 para imprimir el informe de una ruta         |\n";
      cout<<"|Pulsa 0 para salir del programa                      |\n";
      cout<<"|_____________________________________________________|\n";
   cout<<"\nSu elección: ";
   cin >> select;
   getchar();
   while (!isdigit(select[0]) || stoi(select)<0 || stoi(select) > 3)
   {
      clear();
      cout<<" _____________________________________________________\n";
      cout<<"|                                                     |\n";
      cout<<"|-----------------  Menú de monitor: -----------------|\n";
      cout<<"|_____________________________________________________|\n";
      cout<<"|                                                     |\n";
      cout<<"|Pulsa 1 para acceder a la gestión de las rutas       |\n";
      cout<<"|Pulsa 2 para acceder a la gestión de las incidencias |\n";
      cout<<"|Pulsa 3 para imprimir el informe de una ruta         |\n";
      cout<<"|Pulsa 0 para salir del programa                      |\n";
      cout<<"|_____________________________________________________|\n";
      cout<<"\nError por favor escoja una opción válida: ";
      cin >> select;
      getchar();
   }
   return stoi(select);
}

void errorUserNotFound()//Función que indica que ese dni no pertenece a ningún usuario
{
   clear();
   cout<<" ___________________________________________________\n";
   cout<<"|                                                   |\n";
   cout<<"|---------- Inicio de sesión en el sitema ----------|\n";
   cout<<"|___________________________________________________|\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|             Error, el DNI introducido             |\n";
   cout<<"|           no pertenece a ningún empleado          |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|                                                   |\n";
   cout<<"|___________________________________________________|\n";
   exit(-1);
}