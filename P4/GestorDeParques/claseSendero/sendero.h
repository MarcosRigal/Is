#ifndef SENDERO_H
#define SENDERO_H
#include <iostream>
#include <string>

using namespace std;

class Sendero{
    private:

        int difficultyLevel_;   //Nivel de dificultad del 1 al 10
        string name_;           //Nombre del sendero
        int parkID_;            //ID del parque al que pertenece
        int trailID_;           //ID del sendero
        bool trailStatus_;      //Estado del sendero (disponible o deshabilitado)

    public:

        Sendero(int parkID, int trailID){parkID_ = parkID; trailID_ = trailID;}

        inline int getDifficultyLevel() const { return difficultyLevel_; }
        inline string getName() const { return name_; }
        inline int getParkID() const { return parkID_; }
        inline int getTrailID() const { return trailID_; }
        inline bool getTrailStatus() const { return trailStatus_; }

        bool setDifficultyLevel(int const difficultyLevel);
        inline bool setName(string const name) {if(name.empty()){return false;} name_ = name; return true;}
        bool setParkID(int const parkID); /* Falta comprobar si el parque existe o no */
        bool setTrailID(int const &parkID,int const &trailID); /* Falta comprobar si el sendero ya existe o no */
        inline bool setTrailStatus(bool const trailStatus) {trailStatus_ = trailStatus; return true;}

};
#endif