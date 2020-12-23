#ifndef SYSTEM_FUNCTIONS_H
#define SYSTEM_FUNCTIONS_H
#include <string>
#include "../claseAdministrativo/administrativo.h"
using namespace std;

void clear();
bool dniIsValid(string dni);
bool existAdministrator(list<Administrativo> listOfAdministrators, string dni);
bool existMonitor(list<Monitor> listOfMonitors, string dni);
void intro();
string login();
int whoIs(list<Administrativo> listOfAdministrators, list<Monitor> listOfMonitors,string dni);
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