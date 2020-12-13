#ifndef RUTA_H
#define RUTA_H
#include <list>
#include <string>
using namespace std;

class Sendero;

class Senderista;

class Parque;


class Ruta{

    private:
   
    string adaptations_;
    string dniMonitor_;
    string dniMonitorAlternate_;
    int duration_;
    bool exclusiveness_;
    float length_;
    string modality_;
    string name_;
    int numberOfPlaces_;
    list<Senderista*> excursionistRegistered_;
    int parkID_;
    int routeID_;
    list<Sendero*> traversedTrail_;
    list<string> incidences_;


    public:

    Ruta(string dniMonitor,int parkID, int routeID, list<Sendero> traversedTrail, int numberOfPlaces);
    
    inline string getAdaptations() const {return adaptations_;};
    inline string getDniMonitor() const {return dniMonitor_;};
    inline string getDniMonitorAlternate() const {return dniMonitorAlternate_;};
    inline int getDuration() const {return duration_;};
    inline bool getExclusiveness() const {return exclusiveness_;};
    list<string> getIncidences() const;
    inline float getLength() const {return length_;};
    inline string getModality() const {return modality_;};
    inline string getName() const {return name_;};
    inline int getNumberOfPlaces() const {return numberOfPlaces_;};
    list<Senderista*> getExcursionistRegistered() const;
    inline int getParkID() const {return parkID_;};
    inline int getRouteID() const {return routeID_;};
    list<Sendero*> getTraversedTrail() const;

    inline bool setAdaptations(string const &adapts){if(adapts.empty()){return false;} adaptations_=adapts; return true;};
    bool setDniMonitor(string const &dniMonitor);
    bool setDniMonitorAlternate(string const &dniMonitorAlternate);
    bool setIncidences(list<string> incidences);

    inline bool setDuration(int const &duration){if(duration<=0){return false;}duration_=duration; return true;};
    inline bool setExclusiveness(bool exclusiveness){if(exclusiveness!=0){return false;}exclusiveness_=exclusiveness; return true;};
    inline bool setLength(float const &length){if(length<=0){return false;}length_=length; return true;};
    inline bool setModality(string const &modality){if(modality.empty()){return false;} modality_ = modality; return true;};
    inline bool setName(string const &name){if(name.empty()){return false;} name_=name; return true;};
    inline bool setNumberOfPlaces(int const &n){if(n<=0){return false;}numberOfPlaces_=n; return true;};
    
    bool setExcursionistRegistered(list<Senderista*> listOfExcursioneist);
    bool setRouteParkID(int parkID, list<Parque*> &listOfParks);
    bool setRouteID(int const &parkID,int const &routeID);
    bool setTraversedTrails(list<Sendero*> traversedTrails);

    int placesLeft();

};
#endif