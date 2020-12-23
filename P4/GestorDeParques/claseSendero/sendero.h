#ifndef SENDERO_H
#define SENDERO_H
#include <iostream>
#include <string>

using namespace std;

class Sendero{
    private:

      int trailParkID_;      //ID del parque al que pertenece
      int trailID_;      //ID del sendero
      string name_;      //Nombre del sendero
      int difficultyLevel_;  //Nivel de dificultad del 1 al 10
      bool trailStatus_;   //Estado del sendero (disponible o deshabilitado)

    public:

      Sendero(int trailParkID, int trailID, string name, int dificultyLevel, bool trailStatus = true){setTrailParkID(trailParkID); setTrailID(trailID); setDifficultyLevel(dificultyLevel); setName(name); setTrailStatus(trailStatus);}

      inline int getDifficultyLevel() { return difficultyLevel_; }
      inline string getName() { return name_; }
      inline int getTrailParkID() { return trailParkID_; }
      inline int getTrailID() { return trailID_; }
      inline bool getTrailStatus() { return trailStatus_; }

      inline bool setDifficultyLevel(int difficultyLevel){if(difficultyLevel<1 || difficultyLevel>10){return false;}difficultyLevel_=difficultyLevel_; return true;}
      inline bool setName(string name) {if(name.empty()){return false;} name_ = name; return true;}
      inline bool setTrailParkID(int trailParkID){if(trailParkID<1){return false;}trailParkID_=trailParkID; return true;}
      inline bool setTrailID(int trailID){if(trailID<1){return false;}trailID_=trailID; return true;}
      inline bool setTrailStatus(bool trailStatus){trailStatus_ = trailStatus; return true;}

};
#endif