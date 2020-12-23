#ifndef RUTA_H
#define RUTA_H
#include <list>
#include <string>
using namespace std;

class Ruta{

    private:
   
    int routeParkID_;
    int routeID_;
    string name_;
    string dniMonitor_;
    string dniMonitorAlternate_;
    float length_;
    string modality_;
    list<int> idTraversedTrails_;
    int numberOfPlaces_;
    float duration_;
    bool exclusiveness_;
    string adaptations_;
    list<string> excursionistDNI_;
    list<string> incidences_;


    public:

    Ruta(int routeParkID, int routeID, string name, string dniMonitor, string dniMonitorAlternate, float length, string modality, int numberOfPlaces, float duration, list<int> idTraversedTrails, bool exclusiveness= false){setRouteParkID(routeParkID); setRouteID(routeID); setName(name); setDniMonitor(dniMonitor); setDniMonitorAlternate(dniMonitorAlternate); setLength(length); setModality(modality); setNumberOfPlaces(numberOfPlaces); setDuration(duration); setTraversedTrails(idTraversedTrails); setExclusiveness(exclusiveness);}
    
    inline string getAdaptations() {return adaptations_;}
    inline string getDniMonitor() {return dniMonitor_;}
    inline string getDniMonitorAlternate() {return dniMonitorAlternate_;}
    inline float getDuration() {return duration_;}
    inline bool getExclusiveness() {return exclusiveness_;}
    inline list<string> getIncidences() {return incidences_;}
    inline float getLength() {return length_;}
    inline string getModality() {return modality_;}
    inline string getName() {return name_;}
    inline int getNumberOfPlaces() {return numberOfPlaces_;}
    inline list<string> getExcursionistDNI() {return excursionistDNI_;}
    inline int getRouteParkID() {return routeParkID_;}
    inline int getRouteID() {return routeID_;}
    inline list<int> getTraversedTrail() {return idTraversedTrails_;}

    inline bool setAdaptations(string adapts){if(adapts.empty()){return false;} adaptations_=adapts; return true;}
    inline bool setDniMonitor(string dniMonitor){if(dniMonitor.empty()){return false;}dniMonitor_=dniMonitor; return true;}
    inline bool setDniMonitorAlternate(string dniMonitorAlternate){if(dniMonitorAlternate.empty()){return false;}dniMonitorAlternate_=dniMonitorAlternate; return true;}
    inline bool setIncidences(list<string> incidences){if(incidences.empty()){return false;}incidences_ = incidences;return true;}           //A la funcion hay que pasarle un string, no una lista de strings
    inline bool setExcursionistDni(list<string> excursionistDNI){if(excursionistDNI.empty()){return false;}excursionistDNI_=excursionistDNI;return true;}
    inline bool setDuration(float duration){if(duration<=0){return false;}duration_=duration; return true;}
    inline bool setExclusiveness(bool exclusiveness){exclusiveness_=exclusiveness; return true;}
    inline bool setLength(float length){if(length<=0){return false;}length_=length; return true;}
    inline bool setModality(string modality){if(modality.empty()){return false;} modality_ = modality; return true;}
    inline bool setName(string name){if(name.empty()){return false;} name_=name; return true;}
    inline bool setNumberOfPlaces(int n){if(n<3){return false;}numberOfPlaces_=n; return true;}
    inline bool setRouteParkID(int routeParkID){if(routeParkID<1){return false;}routeParkID_= routeParkID; return true;}
    inline bool setRouteID(int routeID){if(routeID<1){return false;}routeID_= routeID; return true;}
    inline bool setTraversedTrails(list<int> idTraversedTrails){if(idTraversedTrails.empty()){return false;}idTraversedTrails_=idTraversedTrails;return true;} 
    
    inline int placesLeft(){return (numberOfPlaces_-excursionistDNI_.size());}
    inline list<string> warnExcursionist(){return excursionistDNI_;}

};
#endif