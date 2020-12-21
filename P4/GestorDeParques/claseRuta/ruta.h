#ifndef RUTA_H
#define RUTA_H
#include <list>
#include <string>
using namespace std;

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
    list<string> excursionistDNI_;
    int parkID_;
    int routeID_;
    list<int> idTraversedTrail_;
    list<string> incidences_;


    public:

    Ruta(string dniMonitor,int parkID, int routeID, list<int> traversedTrail, int numberOfPlaces);
    
    inline string getAdaptations() const {return adaptations_;};
    inline string getDniMonitor() const {return dniMonitor_;};
    inline string getDniMonitorAlternate() const {return dniMonitorAlternate_;};
    inline int getDuration() const {return duration_;};
    inline bool getExclusiveness() const {return exclusiveness_;};
    inline list<string> getIncidences() const {return incidences_;}
    inline float getLength() const {return length_;};
    inline string getModality() const {return modality_;};
    inline string getName() const {return name_;};
    inline int getNumberOfPlaces() const {return numberOfPlaces_;};
    inline list<string> getExcursionistDNI() const {return excursionistDNI_;}
    inline int getParkID() const {return parkID_;};
    inline int getRouteID() const {return routeID_;};
    inline list<int> getTraversedTrail() const {return idTraversedTrail_;}

    inline bool setAdaptations(string const &adapts){if(adapts.empty()){return false;} adaptations_=adapts; return true;};
    bool setDniMonitor(string const &dniMonitor);
    bool setDniMonitorAlternate(string const &dniMonitorAlternate);
    inline bool setIncidences(string incidences){incidences_.push_back(incidences);}           //A la funcion hay que pasarle un string, no una lista de strings
    inline bool setExcursionistDni(string dni){excursionistDNI_.push_back(dni);}
    inline bool setDuration(int const &duration){if(duration<=0){return false;}duration_=duration; return true;};
    inline bool setExclusiveness(bool exclusiveness){if(exclusiveness!=0){return false;}exclusiveness_=exclusiveness; return true;};
    inline bool setLength(float const &length){if(length<=0){return false;}length_=length; return true;};
    inline bool setModality(string const &modality){if(modality.empty()){return false;} modality_ = modality; return true;};
    inline bool setName(string const &name){if(name.empty()){return false;} name_=name; return true;};
    inline bool setNumberOfPlaces(int const &n){if(n<=0){return false;}numberOfPlaces_=n; return true;};
    
    bool setRouteParkID(int parkID, list<int> &listOfParks);
    bool setRouteID(int const &parkID,int const &routeID);
    bool setTraversedTrails(list<int> traversedTrails);

    int placesLeft();
    list<string> warnExcursionist(){return excursionistDNI_;}

};
#endif