#ifndef SYSTEM_FUNCTIONS_H
#define SYSTEM_FUNCTIONS_H
#include <string>
using namespace std;

void clear();
bool dniIsValid(string dni);
bool existAdministrativo(string dni);
bool existMonitor(string dni);
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