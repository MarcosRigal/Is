#ifndef PARQUE_H
#define PARQUE_H
#include <list>
#include <string>
#include "../P4/GestorDeParques/claseSendero/sendero.h"
#include "../P4/GestorDeParques/claseRuta/ruta.h"
#include "../P4/GestorDeParques/systemFunctions/systemFunctions.h"
using namespace std;

struct award
{
    string name;
    string date;
};


class Parque{
    private:

    float area_;
    list<award> awards_;
    string declarationDate_;
    string hours_;
    string location_;
    string name_;
    int parkID_;
    string province_;
    string town_;
    list<Sendero> trailList_;
    list<Ruta> routeList_;

    public:
    Parque::Parque(int parkID){setParkID(parkID);}
    inline string getTown() const {return town_;}
    inline float getArea() const {return area_;}
    inline list<award> getAwards() const {return awards_;}
    inline string getDeclarationDate() const {return declarationDate_;}
    inline string getHours() const {return hours_;}
    inline string getLocation() const {return location_;}
    inline string getName() const {return name_;}
    inline int parkID() const {return parkID_;}
    inline string getProvince() const {return province_;}
    inline list<Sendero> getTrailList() const {return trailList_;}
    inline list<Ruta> getRouteList() const {return routeList_;} 
    inline bool setParkID(int const &parkID){if (existPark(parkID)){return false;} parkID_ = parkID; return true;}


};
#endif