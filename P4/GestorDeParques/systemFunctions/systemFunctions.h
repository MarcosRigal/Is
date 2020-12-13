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


bool loadSystem();
int placesLeft(int parkID, int routeID);
bool saveSystem();
void warnExcursionist(int parkID, int routeID);
bool login();


#endif