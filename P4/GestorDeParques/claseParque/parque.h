#ifndef PARQUE_H
#define PARQUE_H
#include <string>

using namespace std;

class Parque{
    private:

    int parkID_;
    string name_;
    float area_;
    string location_;
    string town_;
    string province_;
    string awards_;
    string declarationDate_;
    string hours_;

    public:

    Parque(int parkID, string name, float area, string location, string town, string province, string awards, string declarationDate, string hours){setParkID(parkID); setName(name); setArea(area); setLocation(location); setTown(town); setProvince(province); setAwards(awards); setDeclarationDate(declarationDate); setHours(hours);}
    
    inline string getTown() {return town_;}
    inline float getArea() {return area_;}
    inline string getAwards() {return awards_;}
    inline string getDeclarationDate() {return declarationDate_;}
    inline string getHours() {return hours_;}
    inline string getLocation() {return location_;}
    inline string getName() {return name_;}
    inline int getParkID() {return parkID_;}
    inline string getProvince() {return province_;}

    inline bool setArea(float area){if (area<=0){return false;} area_=area; return true;}
    inline bool setAwards(string awards){if (awards.empty()){return false;}awards_=awards; return true;}
    inline bool setDeclarationDate(string declarationDate){if(declarationDate.empty()){return false;}declarationDate_= declarationDate; return true;}
    inline bool setHours(string hours){if(hours.empty()){return false;}hours_=hours; return true;}
    inline bool setLocation(string location){if(location.empty()){return false;}location_=location; return true;}
    inline bool setName(string name){if(name.empty()){return false;}name_=name; return true;}
    inline bool setParkID(int parkID){if(parkID<1){return false;}parkID_= parkID; return true;}
    inline bool setProvince(string province){if(province.empty()){return false;}province_=province; return true;}
    inline bool setTown(string town){if(town.empty()){return false;}town_=town; return true;}

};
#endif