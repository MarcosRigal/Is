#ifndef SYSTEM_FUNCTIONS_H
#define SYSTEM_FUNCTIONS_H
#include <string>
#include <list>
using namespace std;

void clear();
bool dniIsValid(string dni);
bool existAdministrator(list<Administrativo*> listOfAdministrators, string dni);
bool existMonitor(list<Monitor*> listOfMonitors, string dni);
bool existExcursionist(list<Senderista*> listOfExcursionist, string dni);
bool existPark(list<Parque*> listOfParks, int parkID);
bool existRoute(list<Ruta*> listOfRoutes, int parkID, int routeID);
bool existTrail(list<Sendero*> listOfTrails, int parkID, int trailID);
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