#ifndef SYSTEM_FUNCTIONS_H
#define SYSTEM_FUNCTIONS_H
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Monitor;

class Senderista;

class Parque;

class Administrativo;

bool existExcursionist(string dni);
bool existPark(int parkID);
bool existRoute(int parkID, int routeID);
bool existTrail(int parkID, int trailID);
bool existMonitor(string dni, list<Monitor*> listOfMonitors);
bool existAdministrator(string dni, list<Administrativo*> listOfAdministrators);
bool loadSystem();
int placesLeft(int parkID, int routeID);
bool saveSystem();
void warnExcursionist(int parkID, int routeID);
bool login();
bool dniIsValid(string dni);

#endif