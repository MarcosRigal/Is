#ifndef PARQUE_H
#define PARQUE_H
#include <list>
#include <string>
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

    public:

    Parque(int parkID, list<Parque*> &listOfParks){setParkID(parkID, listOfParks);}
    
    inline string getTown() const {return town_;}
    inline float getArea() const {return area_;}
    inline list<award> getAwards() const {return awards_;}
    inline string getDeclarationDate() const {return declarationDate_;}
    inline string getHours() const {return hours_;}
    inline string getLocation() const {return location_;}
    inline string getName() const {return name_;}
    inline int getParkID() const {return parkID_;}
    inline string getProvince() const {return province_;}

    inline bool setArea(float const &area){if (area<=0){return false;} area_=area; return true;}
    inline bool setAwards(list<award> const &awards){if (awards.empty()){return false;}awards_=awards; return true;}
    inline bool setDeclarationDate(string const &declarationDate){if(declarationDate.empty()){return false;}declarationDate_= declarationDate; return true;}
    inline bool setHours(string const &hours){if(hours.empty()){return false;}hours_=hours; return true;}
    inline bool setLocation(string const &location){if(location.empty()){return false;}location_=location; return true;}
    inline bool setName(string const &name){if(name.empty()){return false;}name_=name; return true;}
    bool setParkID(int parkID, list<Parque*> &listOfParks);
    inline bool setProvince(string const &province){if(province.empty()){return false;}province_=province; return true;}
    inline bool setTown(string const &town){if(town.empty()){return false;}town_=town; return true;}

};
#endif