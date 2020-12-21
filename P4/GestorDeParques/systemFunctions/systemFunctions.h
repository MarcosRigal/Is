#ifndef SYSTEM_FUNCTIONS_H
#define SYSTEM_FUNCTIONS_H
#include <string>
#include <list>
using namespace std;

void clear();
bool dniIsValid(string dni);
bool existAdministrativo(list<Administrativo*> listOfAdministrators, Administrativo a);
bool existMonitor(list<Monitor*> listOfMonitors, Monitor m);
bool existPark(list<Parque*> listOfParks, Parque p);
bool existRoute(list<Ruta*> listOfRoutes, Ruta r);
bool existTrail(list<Sendero*> listOfTrails, Sendero s);
void intro();
string login();
int whoIs(string dni);
int menuAdministrativo();
int menuMonitor();
void errorUserNotFound();
void shutDown();
int menuParques();
int menuSenderos();
int menuRutas();
int menuSenderistas();
int menuTrabajadores();
int menuIncidencias();

#endif