#include "sendero.h"
#include "../claseParque/parque.h"
#include "../systemFunctions/systemFunctions.h"

bool Sendero::setDifficultyLevel(int const difficultyLevel){
    if (difficultyLevel<1 || difficultyLevel>10){               //Retornamos falso si el nivel de dificultad no esta entre 1 y 10
        return false;
    }

    difficultyLevel_ = difficultyLevel;
    return true;
}

bool Sendero::setTrailParkID(int parkID, list<Parque*> &listOfParks){
    if (existPark(parkID, listOfParks)){
        parkID_ = parkID;
        return true;
    }
    return false;
}

bool Sendero::setParkID(int parkID,list<int> &listOfParks){
    if(parkID == existParkID(parkID, listOfParks)){
        return false;
    }
    parkID_=parkID;
    return true;
}

bool Sendero::setTrailID(int const &parkID,int const &trailID){
    if(trailID == existTrail(parkID, trailID)){
        return false;
    }
    trailID_=trailID;
    return true;
}